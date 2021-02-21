#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    string x;
    ll m;
    cin >> x >> m;
    int d = 0;
    for(char c : x) d = max(d, c - '0');

    if(x.size()==1) {
        if(stoi(x)<=m){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
        return 0;
    }

    ll ac = d, wa = m+1;
    while(wa - ac > 1){
        ll n = (wa+ac) / 2;
        ll v = 0;
        for(char c : x){
            if(v>m/n) v = m+1;
            else v = v * n + (c-'0');
        }
        if(v<=m) ac = n;
        else wa = n;
    }
    cout << ac -d << endl;
    return 0;
}