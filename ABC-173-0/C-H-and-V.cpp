#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(n); i++)
using namespace std;
using ll = long long;
int main()
{
    int H, W, K;
    cin >> H >> W >> K;
    vector<int> c(H*W);
    rep(i, H){
        rep(j, W){
            char s;
            cin >> s;
            if(s=='.') c[i*W+j] = 0;
            else c[i*W+j] = 1;  
            // cout << c[i*W+j];
        }
        // cout << endl;
    }
    int ans = 0;
    rep(maskR, 1<<H){
        rep(maskC, 1<<W){
            int cnt = 0;
            rep(i, H){
                rep(j, W){
                    if((maskR>>i) & 1 ==1 && ((maskC>>j)&1) ==1 && c[i*W+j]==1){
                        cnt++;
                    }
                }
            }
            if (cnt == K) ans++;
        }
    }

    cout << ans << endl;
    return 0;
}