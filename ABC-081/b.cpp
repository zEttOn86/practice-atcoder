#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int N;
    cin >> N;
    vector<ll> A(N);
    rep(i, N) cin >> A[i];
    int counter = 0;
    bool flag = true;
    while(1){
        rep(i, N){
            if((A[i]&1)==1) flag = false;
            else A[i] /= 2;
        }
        
        if(flag){
            counter++;
        }
        else{
            break;
        }
    }
    cout << counter << endl;
    return 0;
}