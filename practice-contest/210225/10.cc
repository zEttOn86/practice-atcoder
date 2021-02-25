#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    string s, t;
    cin >> s >> t;
    int ans = 10000;
    for(int i = 0; i<s.size() - t.size()+1;i++){
        int cnt = 0;
        for(int j = 0; j<t.size(); j++){
            if(s[i+j]!=t[j]) cnt++;
        }
        ans = min(cnt, ans);
    }
    cout << ans << endl;
    return 0;
}