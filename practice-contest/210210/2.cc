#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    map<int, int> mp;
    // rep(i,n) mp[a[i]] = 0;
    rep(i,n) mp[a[i]]++;
    int ans = 0;
    for(auto p : mp){
        int value = p.second;
        if(value%2 == 1) ans++;
    }
    // rep(i,n){
    //     cout << mp[a[i]] << endl;
    // }
    cout << ans << endl;
    return 0;
}
