//https://atcoder.jp/contests/abc185/tasks/abc185_d
#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<int> a(m);
    rep(i,m) cin>>a[i];
    sort(a.begin(), a.end());
    a.push_back(n+1);
    int cur = 1;
    vector<int> s;
    rep(i,m+1){
        int w = a[i]-cur;
        if(w!=0){
            s.push_back(w);
        }
        cur = a[i] + 1;
    }
    int k = n;
    for(int w : s) k = min(k, w);
    int ans = 0;
    for(int w : s) ans += (w+k-1)/k;
    cout << ans << endl;

    return 0;
}