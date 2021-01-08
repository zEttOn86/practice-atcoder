#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int N;
    int d[110];
    cin >> N;
    rep(i, N) cin >> d[i];

    int num[110] = {0};
    rep(i, N) num[d[i]]++;

    int res = 0;
    for(int i=1; i<=100; i++){
        if(num[i]){
            ++res;
        }
    }
    cout << res << endl;
    return 0;
}