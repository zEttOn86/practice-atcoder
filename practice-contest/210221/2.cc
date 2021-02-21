#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;



int main()
{
    ll k;
    cin >> k;
    ll res = 0;
    for(int a = 1; a<=k; a++){
        for(int b = 1; b*a<=k; b++){
            ll c = k / (a*b);
            res += c;
        }
    }
    cout << res << endl;
    return 0;
}