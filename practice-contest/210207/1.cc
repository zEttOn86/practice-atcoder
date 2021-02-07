#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    rep(i,n-1){
        if(a[i]==x) continue;
        else cout << a[i] << " ";
    }
    if(a[n-1]==x) cout << endl;
    else cout << a[n-1] << endl;
    return 0;
}