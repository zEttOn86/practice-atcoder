#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    int ans = 0;
    char prev = s[0];
    if(s[0]=='R') ans++;
    for(int i=1; i< s.size(); i++){
        if(prev=='R' && s[i]=='R') ans++;
        if(prev=='R' && s[i]=='S') ans = ans;
        if(prev=='S' && s[i]=='R') ans=1;
        if(prev=='S' && s[i]=='S') ans = ans;
        prev = s[i];
    }
    cout << ans << endl;
    return 0;
}