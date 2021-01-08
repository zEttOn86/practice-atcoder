#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;


string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main()
{
    string S;
    cin >> S;

    reverse(S.begin(), S.end());
    rep(i, 4) reverse(divide[i].begin(), divide[i].end());

    bool can = true;
    for(int i = 0;i< S.size();){
        bool can2 = false;
        rep(j, 4){
            string d = divide[j];
            if(S.substr(i, d.size()) == d){
                can2 = true;
                i += d.size();
            }
        }
        if(!can2){
            can = false;
            break;
        }
    } 
    if(can) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}