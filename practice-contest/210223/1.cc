#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

auto modpow(ll a, ll b, ll mod) -> ll
{
    ll x = a;
    ll ans = 1;
    while(b)
    {
        if(b%2!=0)
        {
            ans *= x;
        }    
        else 
        {
            /* Do nothing*/
        }
        // ans *= x;
        ans %= mod;
        x *= x;
        x %= mod;
        b /= 2;
    }
    return ans;
}

int main()
{
    int a,b,c;
    cin >> a >> b>> c;
    cout << modpow(a, modpow(b, c, 4)+4, 10) << endl;
    return 0;
}