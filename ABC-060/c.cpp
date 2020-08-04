#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;
int main()
{
    int n;
    ll t;
    cin >> n >> t;
    vector<ll> tt(n);
    rep(i,n) cin >> tt[i];

    ll ans = 0;
    rep(i,n-1){
        ans += min(tt[i+1] - tt[i], t);
    }
    cout << ans + t << endl;
    return 0;
}