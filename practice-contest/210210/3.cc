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
    vector<int> counter(100010);
    rep(i, n) counter[a[i]]++;
    int ans = 0;
    rep(i, n){
        int val = a[i];
        int total = counter[val];
        total += counter[val+1];
        if(val>=1) total += counter[val-1];
        ans = max(ans, total);
    }
    cout << ans << endl;
    return 0;
}