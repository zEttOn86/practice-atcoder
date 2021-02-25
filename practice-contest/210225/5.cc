#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    rep(i, h) rep(j, w){
        cin >> a[i][j];
    }
    int min_val = 110;
    rep(i, h) rep(j, w){
        min_val = min(min_val, a[i][j]);
    }
    int ans = 0;
    rep(i, h) rep(j, w){
        ans += a[i][j] - min_val;
    }
    cout << ans << endl;
    return 0;
}