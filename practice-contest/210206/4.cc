#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    int ans = 0;
    for(int i =0; i< s.size(); i++){
        int total = 0;
        if(s[i]=='A' || s[i]=='C' || s[i]=='G' || s[i]=='T') total++;
        for(int j = i+1; j<s.size(); j++){
             if(s[j]=='A' || s[j]=='C' || s[j]=='G' || s[j]=='T') total++;
            else break;
        }
        ans = max(total, ans);
    }
    cout << ans << endl;
    return 0;
}