#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    vector<string> divides  = {"dream", "dreamer", "erase", "eraser"};
    reverse(s.begin(), s.end());
    rep(i,4) reverse(divides[i].begin(), divides[i].end());
    
    bool can = true;
    for(int i =0; i<s.size();){
        bool can2 = false;
        for(auto d : divides){
            if(s.substr(i, d.size()) == d){
                can2 = true;
                i += d.size();
            }
        }
        if(!can2) {
            can = false;
            break;
        }
    }
    if(can) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}