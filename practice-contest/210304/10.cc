#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    ll x;
    cin >> x;
    ll p = 100;
    ll step = 0;
    while(p<x){
        p+= p/100;
        step++;
    }
    cout << step << endl;
    return 0;
}