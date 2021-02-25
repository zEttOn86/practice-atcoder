#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int a, b, m;
    cin >> a >> b>> m;
    vector<int> r(a), mv(b), x(m), y(m), c(m);
    rep(i, a) cin >> r[i];
    rep(i, b) cin >> mv[i];
    rep(i, m) cin >> x[i] >> y[i] >> c[i];

    int ans = 1e9;
    // cout << ans << endl;
    rep(i, m){
        int sum = r[x[i]-1] + mv[y[i]-1] - c[i];
        ans = min(ans, sum);
    }
    sort(r.begin(), r.end());
    sort(mv.begin(), mv.end());
    ans = min(ans, r[0]+mv[0]);
    cout << ans << endl;
    return 0;
}