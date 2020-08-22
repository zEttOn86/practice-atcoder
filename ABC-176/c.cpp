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
    ll ans = 0;
    for(int i=1; i<n; i++){
        ll left = a[i-1];
        ll right = a[i];
        if(left > right){
            ans += (left - right);
            a[i] += (left - right);
        }
    }
    cout << ans << endl;
    return 0;
}