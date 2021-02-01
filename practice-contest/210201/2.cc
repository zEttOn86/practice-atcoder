#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    ll s = 0;
    ll ans = 0;
    rep(i, n){
        ans += a[i] * i;
        ans -= s;
        s += a[i];
    }
    cout << ans << endl;
    return 0;
}