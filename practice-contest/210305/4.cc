#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int ans;
    bool can = false;
    for(int i=1; i<=n; i++){
        int nn = static_cast<double>(i) * 1.08;
        if(nn == n) {
            ans = i;
            can = true;
        }
    }

    if(can) cout << ans << endl;
    else cout <<":(" << endl;
    return 0;
}