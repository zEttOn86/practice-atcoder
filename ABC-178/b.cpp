#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    ll a, b, c, d;
    ll ans = - (1e9+1)*(1e9+1);
    // cout << ans;
    cin >> a >> b >> c >> d;
    ans = max(ans, a*c);
    ans = max(ans, a*d);
    ans = max(ans, b*c);
    ans = max(ans, b*d);
    cout << ans << endl;

    return 0;
}