#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

ll qpow(ll a, ll b, ll p){
    ll x = a;
    ll ans = 1;
    while(b)
    {
        if(b%2!=0) ans *= x;
        ans %= p;
        x*=x;
        x%=p;
        b/=2;
    }
    return ans;
}

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    cout << qpow(a, qpow(b,c,4)+4, 10);
    return 0;
}