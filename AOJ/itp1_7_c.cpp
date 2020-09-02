#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> table(r+1, vector<int>(c+1, 0));
    rep(i, r){
        rep(j, c){
            cin >> table[i][j];
            table[i][c] += table[i][j];
            table[r][j] += table[i][j];
            table[r][c] += table[i][j];
        }
    }
    rep(i, r+1){
        rep(j, c+1){
            cout << table[i][j];
            if(j!=c){
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}