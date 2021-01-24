#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int N;
    ll X;
    cin >> N >> X;
    vector<ll> V(N), P(N);
    rep(i, N) cin >> V[i] >> P[i];
   
    ll sum = 0;
    int res = -1;
    X *= 100;
    rep(i, N){
        sum += V[i] * P[i];
        if(sum > X){ res = (i + 1); break;}
    }
    cout << res << endl;

    return 0;
}