#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> x(n);
    rep(i,n) cin >> x[i];
    sort(x.begin(), x.end());
    int ans = INT_MAX;
    for(int i=x[0]; i<=x[n-1]; i++){
        int cost = 0;
        rep(j, n) cost += ((i-x[j])*(i-x[j]));
        ans = min(ans, cost);
    }
    cout << ans << endl;
    return 0;
}