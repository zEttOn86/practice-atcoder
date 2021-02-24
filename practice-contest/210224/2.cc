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
    bool can = true;
    rep(i,h) rep(j,w){
        if(s[i][j] != '#') continue;
        int cnt = 1;
        int x, y;
        y = i - 1;
        x = j;
        if(y >= 0 && y < h && x >= 0 && x < w){
            if(s[y][x] == '#') cnt++;
        }
        y = i;
        x = j - 1;
        if(y >= 0 && y < h && x >= 0 && x < w){
            if(s[y][x] == '#') cnt++;
        }

        y = i;
        x = j + 1;
        if(y >= 0 && y < h && x >= 0 && x < w){
            if(s[y][x] == '#') cnt++;
        }

        y = i+1;
        x = j;
        if(y >= 0 && y < h && x >= 0 && x < w){
            if(s[y][x] == '#') cnt++;
        }
        if(cnt==1) can = false;
    }
    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}