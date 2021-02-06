#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, m, k;
    cin >> n >> k >> m;
    vector<int> a(n-1);
    rep(i,n-1) cin >> a[i];
    int sum = 0;
    rep(i, n-1){
        sum += a[i];
    }
    int diff = max(0, n*m - sum);
    if(diff <= k) cout << diff << endl;
    else cout << -1 << endl;

    return 0;
}