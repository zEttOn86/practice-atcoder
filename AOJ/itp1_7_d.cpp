#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, m, l;
    cin >> n >> m >> l;
    vector<vector<int>> a(n, vector<int>(m)), b(m, vector<int>(l));
    vector<vector<ll>> c(n, vector<ll>(l, 0));  
    rep(i, n) rep(j, m){
        cin >> a[i][j];
    }
    rep(i, m) rep(j, l){
        cin >> b[i][j];
    }
    rep(i, n) rep(j, m) rep(k, l){
        c[i][k] += a[i][j] * b[j][k];
    }
    rep(i, n){
        rep(j, l){
            cout << c[i][j];
            if(j!=l-1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}