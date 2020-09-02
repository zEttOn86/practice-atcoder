#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    vector<int> b(m);
    rep(i, n){
        rep(j, m){
            cin >> a[i][j];
        }
    }
    rep(i,m) cin >> b[i];

    rep(i,n){
        int ans = 0;
        rep(j,m){
            ans += a[i][j] * b[j];
        }
        cout << ans << endl;
    }
    return 0;
}