#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> r(n);
    rep(i, n) cin >> r[i];
    sort(r.begin(), r.end());
    double ans = 0;
    for(int i=n-k; i<n; i++){
        ans = (ans+r[i])/2;
    }
    printf("%.6f\n", ans);
    return 0;
}