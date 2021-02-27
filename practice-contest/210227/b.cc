#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;
const int INF = INT_MAX;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n), p(n), x(n);
    rep(i,n) cin >> a[i] >> p[i] >> x[i];
    int ans = INF;
    rep(i,n){
        if(x[i]-a[i]>0) ans = min(ans, p[i]);
        // ans += max(x[i] - a[i], 0) * p[i];
    }
    if(ans==INF) ans = -1;
    cout << ans << endl;
    return 0;
}