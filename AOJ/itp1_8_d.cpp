#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    string s;
    string p;
    cin >> s >> p;
    rep(i, p.size()-1){
        s.push_back(s[i]);
    }
    int ans = 0;
    rep(i, s.size()){
        int cnt = 0;
        rep(j, p.size()){
            if(s[i+j]!=p[j]) break;
            else cnt++;
        }
        if(cnt==p.size()) ans = 1;
    }
    
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}