#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    rep(i, n){
        if(s.substr(i, 3)=="ABC"){
            ans++;
            // i += 3;
        }
            // cout << s.substr(i, 3) << endl;
    }
    cout << ans << endl;
    return 0;
}