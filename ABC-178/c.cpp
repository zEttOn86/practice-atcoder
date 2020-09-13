#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;
const ll mod = 1000000007;

ll powmod(ll x, ll y){
    ll res = 1;
    for(ll i=0; i<y; i++){
        res = res*x%mod;
    }
    return res;
}
int main()
{
    ll n;
    cin >> n;
    ll ans = powmod(10, n) - powmod(9, n) - powmod(9,n) + powmod(8, n);
    ans %= mod;
    ans = (ans+mod)%mod;
    cout << ans << endl;
  
    return 0;
}