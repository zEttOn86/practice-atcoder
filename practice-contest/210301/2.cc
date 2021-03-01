#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int N, T;
    cin >> N >> T;
    vector<int> c(N), t(N);
    rep(i,N) cin >> c[i] >> t[i];

    int ans = INT_MAX;
    rep(i,N){
        if(t[i]<=T) {
            ans = min(ans, c[i]);
        }
    }
    if(ans==INT_MAX) cout << "TLE" << endl;
    else cout << ans << endl;

    return 0;
}