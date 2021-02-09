#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n, x;
    cin >> n >> x;
    int v, p;
    int total = 0;
    int res = -1;
    rep(i,n){
        cin >> v >> p;
        total += v * p;
        if(total > x*100) {
            res = i+1;
            break;
        }
    }
    cout << res << endl;
    return 0;
}