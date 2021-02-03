#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    int ans = 0;
    while(1){
        bool can = true;
        rep(i,n){
            if((a[i]&1)==0) a[i] /= 2;
            else can = false;
        }
        if(can) ans++;
        else break;
    }
    cout << ans << endl;
    return 0;
}