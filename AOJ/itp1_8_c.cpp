#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    string s;
    vector<int> ans(26, 0);
    while(cin >> s){
        rep(i, s.size()){
            if(s[i]>='A' && s[i]<='Z') s[i] += 'a' - 'A';
            ans[s[i]-'a']++;
        }
    }
    
    char moji = 'a';
    rep(i, ans.size()){
        printf("%c", moji);
        cout << " : " << ans[i]<<endl;
        moji++;
    }
    
    return 0;
}