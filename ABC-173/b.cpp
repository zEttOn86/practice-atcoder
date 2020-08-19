#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int cnt[4] = {0};
    rep(i, n){
        string s;
        cin >> s;
        if(s[0]=='A') cnt[0]++;
        if(s[0]=='W') cnt[1]++;
        if(s[0]=='T') cnt[2]++;
        if(s[0]=='R') cnt[3]++;
    }
    cout << "AC x " << cnt[0] << endl;
    cout << "WA x " << cnt[1] << endl;
    cout << "TLE x " << cnt[2] << endl;
    cout << "RE x " << cnt[3] << endl;
    
    return 0;
}