#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n>> m;
    vector<int> a(m);
    rep(i,m) cin >> a[i];
    ll sum = 0;
    rep(i,m) sum+=a[i];
    if(sum>n) cout << -1 <<endl;
    else cout << n - sum << endl;
    return 0;
}