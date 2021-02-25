#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    ll n, m, t;
    cin >> n >> m >> t;
    vector<ll> a(m), b(m);
    rep(i,m) cin >> a[i] >> b[i];
    ll val = n;
    bool can = true;
    for(int i = 0; i < m; i++){
        if(i==0) val -= a[0];
        else val -= a[i] - b[i-1];

        if(val>0) {}
        else {can = false; break;}

        val = min(n, val+b[i]-a[i]);  
    }
    // cout << val << endl;
    val -= t - b[m-1];
    if(val>0){}
    else can = false;
    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}