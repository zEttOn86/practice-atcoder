#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    // rep(i, n) cout << s[i] << endl;
    sort(s.begin(), s.end());
    // rep(i, n) cout << s[i] << endl;
    int ans =0;
    string temp = "";
    rep(i,n){
        if(temp != s[i]) {temp=s[i]; ans++;}
    }
    cout << ans << endl;

    return 0;
}