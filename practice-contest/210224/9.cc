#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];
    for(int i=1;i<n;i++) a[i] += a[i-1];
    for(int i=1;i<n;i++) b[i] += b[i-1];
    int ans = 0;
    for(int i=0; i<n; i++){

        int v = a[i] + b[n-1];
        if(i!=0) v -= b[i-1];
        ans = max(ans, v);
        // for(int j=0; j<n; j++){

        // }
    }
    cout << ans << endl;

    return 0;
}