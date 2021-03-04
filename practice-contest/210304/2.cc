#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    int total = 0;
    rep(i,n) total += a[i];
    int cnt = 0;
    rep(i,n){
        if(total<= a[i]*4*m) cnt++;
        else{;}
    }
    if(m<=cnt) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}