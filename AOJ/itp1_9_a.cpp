#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

string tolower(string s){
    rep(i, s.size()){
        if(s[i]>='A' && s[i]<='Z') s[i] += 'a' - 'A';
    }
    return s;
}

int main()
{
    string t, w;
    cin >> w;
    w = tolower(w);
    int ans = 0;
    while(cin >> t){
        if(t=="END_OF_TEXT") break;
        t = tolower(t);
        if(t==w) ans++;
    }
    cout << ans << endl;
    return 0;
}