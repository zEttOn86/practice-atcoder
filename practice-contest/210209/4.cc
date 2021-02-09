#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int in(){
    double x;
    cin >> x;
    x *= 10000;
    return round(x);
}

bool ok(ll dx, ll dy, ll z){
    return dx * dx + dy * dy <= z*z;
}

ll f(ll x, ll y, ll z, ll lim){
    int l = 0, r = 1;
    ll res = 0;
    for(int i = int(1e9)+50000; i>= lim; i-= 10000){
        while(ok(l*10000-x, i-y, z)) --l;
        while(ok(r*10000-x, i-y, z)) ++r;
        res += r-l-1;
    }
    return res;
}


int main()
{
    ll x = in();
    ll y = in();
    ll z = in();
    x %= 10000; // 0 ^ 1に収める
    y %= 10000;
    ll ans = f(x,y,z,10000);// 上半分：1までやる．
    ans += f(x,-y,z,0); // 下半分：0までやる
    cout << ans << endl;
    return 0;
}