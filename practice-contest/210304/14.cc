#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int a, b, c, k;
    cin >> a >> b >> c >> k;
    int ans = 0;
    ans += min(a, k);
    k -= ans;
    if(k<=0){
        cout << ans << endl;
        return 0;
    }
    k -= min(b, k);
    if(k<=0){
        cout << ans << endl;
        return 0;
    }
    ans += min(c,k)*(-1);
    cout << ans << endl;
    return 0;
}