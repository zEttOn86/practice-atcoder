#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    ll N;
    cin >> N;
    vector<ll> a(N), b(N);
    rep(i, N) cin >> a[i];
    rep(i, N) cin >> b[i];
    ll cn = a[0] * b[0];
    ll max_an = a[0];
    cout << cn << endl;
    for(int i = 1; i<N; i++){
        max_an = max<ll>(max_an, a[i]);
        cn = max<ll>(cn, max_an*b[i]);
        cout << cn << endl;        
    }
    return 0;
}