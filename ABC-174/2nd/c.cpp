#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int k;
    cin >> k;
    ll x = 7%k;
    for(int i=1; i<=k;i++){
        if(x==0) {
            cout << i << endl;
            return 0;
        }
        x = (10*x+7)%k;
    }
    cout << -1 << endl;
    return 0;
}