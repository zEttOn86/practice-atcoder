#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int N;
    ll S, D;
    cin >> N >> S>> D;
    bool can = false;
    rep(i, N){
        ll X, Y;
        cin >> X >> Y;
        if(X>=S || Y<=D){
        }else{
            can = true;
        }
    }
    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}