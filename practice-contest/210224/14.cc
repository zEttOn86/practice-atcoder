#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    rep(i,n) cin >> x[i] >> y[i];
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            
            if(abs(y[j]-y[i]) <= abs(x[j]-x[i])) ans++;
            // cout << ans << endl;
        }
    }
    cout << ans << endl;
    return 0;
}