#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

ll llpow(ll a, ll b){
    if(b==0) return 1;
    ll res = llpow(a, b/2);
    return res * res * (b%2!=0 ? a : 1);
}

int main()
{
    ll n;
    cin >> n;

    set<ll> save;
    ll a = 2; 
    ll sum = a;
    while(1){
        sum *= a;
        if (sum <= n) {
            save.insert(sum);
        }
        else {
            a++; 
            sum = a;
        }
        if(a*a > n) break;
    }
    // for(auto a : save){
    //     cout << a << endl;
    // }
    cout << n - save.size() << endl;
    return 0;
}