#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n,m,c;
    cin >> n >> m >> c;
    vector<int> b(m);
    rep(i,m) cin >> b[i];
    vector<vector<int>> a(n, vector<int>(m));
    rep(i,n)rep(j,m) cin >> a[i][j];
    int ans = 0;
    rep(i,n){
        int v = 0;
        rep(j,m){
            v += a[i][j] * b[j];
        }
        v += c;
        if(v>0) ans++;
    }
    cout << ans << endl;
    return 0;
}