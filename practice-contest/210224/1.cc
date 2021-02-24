#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];
    rep(i,h)rep(j,w){
        int cnt = 0;
        for(int ii=-1; ii<2; ii++){
            for(int jj=-1; jj<2; jj++){
                int y = i + ii;
                int x = j + jj;
                if(x>=0 && x<w && y>=0 && y<h){
                    if(s[y][x]=='#') cnt++;
                }
            }
        }
        if(s[i][j] !='#') s[i][j] = cnt + '0';
    }
    rep(i,h) cout << s[i] << endl;
    return 0;
}