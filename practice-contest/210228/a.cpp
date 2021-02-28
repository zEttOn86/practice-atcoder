#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    vector<int> c(4);
    rep(i, 4) cin >> c[i];
    int sum = 0;
    rep(i,4) sum += c[i];
    bool can = false;
    for(int bit =0; bit < (1<<4); bit++){
        int total = 0;
        for(int i = 0; i<4; i++){
            if(bit&(1<<i)){
                total += c[i];
            }
        }
        if(total == (sum-total)) can = true;
    }
    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}