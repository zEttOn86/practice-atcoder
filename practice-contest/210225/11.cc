#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n,d,x;
    cin >> n >> d >> x;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int ans = x;
    for(int i=0; i<n; i++){
        int tmp = (d-1)/ a[i] + 1;
        ans += tmp;
    }
    cout << ans << endl;
    return 0;
}