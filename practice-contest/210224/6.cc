#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;
ll f(ll n, ll x){
    if(n==-1) return 0;
    else{
        return n/x + 1;
    }
}
int main()
{
    ll a, b, x;
    cin >> a >> b >> x;
    cout << f(b, x) - f(a-1, x) << endl;
    return 0;
}