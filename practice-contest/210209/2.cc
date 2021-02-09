#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    ll sum = 0;
    rep(i,n) sum += a[i] * b[i];
    if(sum==0) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}