#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;
int main()
{
    string s, t;
    cin >> s >> t;
    bool ans = true;
    rep(i, s.size()){
        if(s[i] == t[i]) continue;
        else if(s[i] =='@'){
            if(t[i] == 'a' || t[i] == 't' || t[i] == 'c' || t[i] == 'o' || t[i] == 'd' || t[i] == 'e' || t[i] == 'r') continue;
            else ans = false;
        }
        else if(t[i] == '@'){
            if(s[i] == 'a' || s[i] == 't' || s[i] == 'c' || s[i] == 'o' || s[i] == 'd' || s[i] == 'e' || s[i] == 'r') continue;
            else ans = false;
        }
        else ans=false;
    }
    if(ans) cout << "You can win" << endl;
    else cout << "You will lose" << endl;
    return 0;
}