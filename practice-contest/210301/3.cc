#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int a;
    cin >> a;
    int ans = 0;
    for(int x = 0; x<=a; x++){
        int y = a -x;
        ans = max(y*x, ans);
    }
    cout << ans << endl;
    return 0;
}