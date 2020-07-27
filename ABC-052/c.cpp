#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;
int INF = 1e9+7;
int main()
{
    int N;
    cin >> N;
    for(int i=1; i<=N; i++){
        int x = i;
        for(int j=2; j*j <= i; j++){//http://www.etcnotes.info/almath/mathsinsuu.html
            if(x%j == 0){
                int res = 0;
                while(x%j==0){
                    x/=j;
                    res++;
                }
                cnt[j] += res;
            }
        }
        if(x!=1){
            cnt[x]++;
        }
    }

    int ans = 1;
    for(int i=1; i<=N; i++){
        ans *= cnt[i]+1;
        ans %= INF;
    }
    cout << ans << endl;


    return 0;
}