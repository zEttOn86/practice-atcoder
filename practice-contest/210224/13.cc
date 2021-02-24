#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    ll ans = 0;
    rep(i, n){
        if(i==n-1 && x!=a[i]){ // 最後の人が満足できない場合 break
            break;
        }
        if(x - a[i]>=0){
            ans++;
            x -=a[i];
        }
    }
    cout << ans << endl;
    return 0;
}