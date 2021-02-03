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
    rep(i, n-1) a[i+1] += a[i];

    /* 最初が正符号のとき */
    int sign = 1;
    ll sum1 = 0;
    ll ans1 = 0;
    for(int i = 0; i<n; i++){
        sign *= -1;
        if((sum1+a[i])*sign > 0) continue;
        ans1 = ans1 + abs(sign-a[i]-sum1);
        sum1 = sign - a[i];
        // cout << sum1 << endl;
    }

    /* 最初が負符号のとき */
    sign = -1;
    ll sum2 = 0;
    ll ans2 = 0;
    for(int i = 0; i<n; i++){
        sign *= -1;
        if((sum2+a[i])*sign > 0) continue;
        ans2 = ans2 + abs(-sum2-a[i]+sign);
        sum2 = sign - a[i];
    }
    cout << min(ans1, ans2) << endl;
    return 0;
}