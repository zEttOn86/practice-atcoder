#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    ll ans = 0;
    for(int i=1; i<=n; i++){
        if(i%3==0 && i%5) continue;
        else if(i%3==0) continue;
        else if(i%5==0) continue;
        else ans+=i;
    }
    cout << ans << endl;
    return 0;
}