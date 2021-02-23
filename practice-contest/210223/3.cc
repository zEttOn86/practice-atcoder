#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int odd_cnt = 0;
    rep(i,n) if(a[i]%2!=0) odd_cnt++;
    if(odd_cnt%2==0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}