#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

const int INF = INT_MAX;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int ans = INF;
    for(int bit=0; bit< (1<<n); bit++){
        int sum = 0;
        int k = 0;
        for(int i=0; i<n; i++){
            if(bit&(1<<i)){
                sum += s[i] - '0';
                k++;
            }
        }
        if(k==0) continue;
        if(sum%3==0) ans = min(ans, n-k);
    }
    if(INF==ans) ans=-1;
    cout << ans << endl;
    
    return 0;
}