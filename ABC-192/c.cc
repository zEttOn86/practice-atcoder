#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

ll g2(string x){
    sort(x.begin(), x.end());
    ll res = 0;
    for(auto s : x){
        res *=10;
        res += s - '0';
    }
    return res;
}

ll g1(string x){
    sort(x.begin(), x.end(), greater<>());
    ll res = 0;
    for(auto s : x){
        res *=10;
        res += s - '0';
    }
    return res;
}

int main()
{
    ll n;
    int k;
    cin >> n >> k;
    string nn = to_string(n);

    ll an = n;

    for(ll i = 1; i<=k; i++){
        // cout << an << endl;
        // cout << g1(to_string(an)) << endl;
        // cout << g2(to_string(an)) << endl;

        an = g1(to_string(an)) - g2(to_string(an));
    }
    cout << an << endl;

    return 0;
}