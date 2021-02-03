#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    vector<vector<int>> c(3, vector<int>(3));
    rep(i,3){
        cin >> c[i][0] >> c[i][1] >> c[i][2];
    }
    vector<int> a(3);
    vector<int> b(3);
    for(int i = 0; i<3; i++){
        b[i] = c[i][0] - a[0];
    }
    for(int i = 1; i<3; i++){
        a[i] = c[0][i] - b[0];
    }
    bool can = true;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(c[i][j] == b[i]+a[j]){}
            else can = false;
        }
    }
    if(can) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}