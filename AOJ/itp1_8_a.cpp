#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    string s;
    getline(cin, s);
    rep(i, s.size()){
        if(s[i]>='a' && s[i]<='z') s[i] += 'A' - 'a';
        else if(s[i]>='A' && s[i]<='Z') s[i] += 'a' - 'A';
    }
    cout << s << endl;
    return 0;
}