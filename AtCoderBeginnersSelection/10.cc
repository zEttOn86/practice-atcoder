#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    string divide[4] = {"dream", "dreamer", "erase", "eraser"};
    rep(i, 4) reverse(divide[i].begin(), divide[i].end());
    bool can = true;
    for(int i = 0; i<s.size(); i++){
        bool can2 = false;
        rep(j, 4){
            string d = divide[j];
            if(s.substr(i, d.size()) == d){
                can2 = true;
                i += d.size();
            }
        }
        if(!can2){
            can = false;
            break;
        }
    }
    if(can) cout << "YES" <<endl;
    else cout << "NO" <<endl;
    return 0;
}