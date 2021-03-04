#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    string s, t;
    cin >> s >> t;
    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());
    bool can = true;
    for(int i=0; i<s.size();i++){
        if(s[i]==t[i+1]) continue;
        else can = false;
    }
    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}