#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> x(n);
    rep(i, n) cin >> x[i];
    int d = 0;
    rep(i, n){
        d += min(x[i]*2, abs(k-x[i])*2);
    }
    cout << d << endl;
    return 0;
}