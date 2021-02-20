#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    ll x, k, d;
    cin >> x >> k >> d;
    x = abs(x);
    if(x/k >= d) cout << x - k*d << endl;
    else{
        ll e = x/d;
        k -= e;
        x -= e*d;
        if(k%2==1){x = abs(x - d);}
        cout << x << endl;
    }
    return 0;
}