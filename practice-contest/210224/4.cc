#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    ll power = 1;
    rep(i,n){
        power *= (i+1);
        power %= ll(1e9)+7;
    }
    cout << power << endl;
    return 0;
}