#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> c(n+1);
    rep(i, k){
        int d;
        cin >> d;
        vector<int> a(d);
        rep(i,d) cin >> a[i];
        rep(i,d) c[a[i]]++;
    }
    int ans = 0;
    for(int i=1; i<=n;i++){
        if(c[i]){;}
        else ans++;
    }
    cout << ans << endl;
    return 0;
}