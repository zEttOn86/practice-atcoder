#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;
int main()
{
    ll N, D;
    cin >> N >> D;
    vector<ll> X(N), Y(N);
    rep(i, N) cin >> X[i] >> Y[i];
    int cnt = 0;
    ll dist = D * D;
    // cout << D * D << endl;
    rep(i, N){
        if(dist -  Y[i]*Y[i] >= X[i]*X[i]) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}