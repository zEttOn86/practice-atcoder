#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;

int main()
{
    int H, W, K;
    cin >> H >> W >> K;
    vector<string> A(H);
    for(int i=0; i<H; i++){
        cin >> A[i];
    }
    int ans = 0;
    for(int h = 0; h < (1<<H); h++){
        for(int w = 0; w < (1<<W); w++){
            int black = 0;
            for(int i=0; i<H; i++){
                for(int j=0; j<W; j++){
                    if(((h>>i) & 1 ) == 0 &&
                        ((w>>j) & 1) == 0 && 
                        (A[i][j]=='#')) black++;
                }
            }
            if(black==K) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}