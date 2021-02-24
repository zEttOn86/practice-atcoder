#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        if(s[i]=='W') a[i] += (i-1>=0 ? a[i-1]+1 : 1);
        else a[i] += (i-1>=0 ? a[i-1] : 0);
    }
    vector<int> b(n);
    for(int i=n-1; i>=0; i--){
        if(s[i]=='E') b[i] += (i+1<n ? b[i+1]+1 : 1);
        else b[i] += (i+1<n ? b[i+1] : 0);
    }
    // rep(i, n){
    //     cout << b[i] << endl;
    // }

    int ans = 1e9;
    for(int i = 0; i<n; i++){
        ans = min(ans, a[i]+b[i]-1);
    }
    cout << ans << endl;
    return 0;
}