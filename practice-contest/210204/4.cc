#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    string ans;
    for(int bit=0; bit < (1<<3); bit++){
        string op;
        for(int i=0; i<3; i++){
            if(bit&(1<<i)){op += "+";}
            else{op += "-";}
        }
        int sum = s[0]-'0';
        for(int i=0;i<3;i++){
            if(op[i]=='+') sum += s[i+1] - '0';
            else sum -= s[i+1] -'0';
        }
        if(sum==7){
            ans = op;
            break;
        }
        // cout << op << endl;
    }
    cout << s[0] << ans[0] << s[1] << ans[1] << s[2] << ans[2] << s[3] << "=7" << endl;
    return 0;
}