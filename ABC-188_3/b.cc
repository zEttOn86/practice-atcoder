#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    rep(i,N) cin >> A[i];
    rep(i,N) cin >> B[i];
    ll prod = 0;
    rep(i, N){
        prod += A[i] * B[i];
    }
    if(prod==0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}