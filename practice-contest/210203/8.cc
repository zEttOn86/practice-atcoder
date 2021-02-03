#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;
    // ll pizzaA;
    // ll pizzaB;
    ll ans = 1e9;
    for(int i=0; i<max(x,y)+1; i++){
        // if(i>=x){
        // }else{
        //     pizzaA = max(0, x-i);
        // }
        // if(i>=y){}
        // else{
        //     pizzaB = max(0, y-i);
        // }
        ll total = i*2*c + a*max((x-i), 0) + b*max((y-i), 0);
        // cout << total << endl;
        ans = min(ans, total);
    }

    cout << ans << endl;
    return 0;
}