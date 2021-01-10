#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    rep(i, N) cin >> A[i];
    rep(i, N) cin >> B[i];

    int res = 0;
    rep(i, N) res += A[i] * B[i];

    if(res == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}