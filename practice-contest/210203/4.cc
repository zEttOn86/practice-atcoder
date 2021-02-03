#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin>>a[i];
    rep(i, n - 1) a[i + 1] += a[i];

    int sign = 1;
    ll ans1 = 0;
    ll sum1 = 0;
    for(int i=0; i<n; i++){ // 最初が負のとき
        sign *= -1;
        if((sum1+a[i])*sign >0) continue;
        ans1 += abs(sign - a[i] -sum1);
        sum1 += sign -a[i] -sum1; 
    }

    sign = -1;
    ll ans2 = 0;
    ll sum2 = 0;
    for(int i=0; i<n; i++){ // 最初が正のとき
        sign *= -1;
        if((sum2+a[i])*sign >0) continue;
        ans2 += abs(sign - a[i] -sum2);
        sum2 += sign -a[i] -sum2; 
    }

    cout << min(ans1, ans2) << endl;
    return 0;
}