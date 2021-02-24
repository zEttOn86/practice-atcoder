#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n+1);
    rep(i,n) cin >> a[i+1];

    map<int, int> mp;
    int cnt = 0;
    int idx = 1;
    while(1){
        if(mp[idx] != 0) break;
        mp[idx]++;
        cnt++;
        // cout << idx << " " << cnt << endl;
        idx = a[idx];
        if(idx==2) {
            // cnt++;
            break;
        }
    }

    if(idx==2) cout<< cnt << endl;
    else cout << -1 << endl;
    return 0;
}