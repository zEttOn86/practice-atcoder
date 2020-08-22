#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, x, t;
    cin >> n >> x >> t;
    int ans = 0;
    while(n > 0){
        ans += t;
        n -= x; 
    }
    cout << ans << endl;
    return 0;
}