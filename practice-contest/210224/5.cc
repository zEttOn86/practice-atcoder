#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;
ll mpow(ll a, ll b){
    if(b==0) return 1;
    ll res = mpow(a, b/2);
    return res * res * (b%2!=0 ? a : 1);
}
int main()
{
    int n, k;
    cin >> n >> k;
    cout << k * mpow(k-1, n-1) << endl;
    return 0;
}