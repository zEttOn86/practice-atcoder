#include <stdio.h>
#include <stdlib.h>
#define rep(i,n) for(int i=0; i<(n); i++)
typedef long long ll;
#define max(a,b) \
({ __typeof__ (a) _a = (a); \
    __typeof__ (b) _b = (b); \
    _a > _b ? _a : _b; })
#define min(a,b) \
({ __typeof__ (a) _a = (a); \
    __typeof__ (b) _b = (b); \
    _a > _b ? _b : _a; })

ll * solve(int n, int *x, int *y, int *p){
    const ll inf = 1LL << 62;
    int mul = 1;
    for(int i=0; i<n; i++){
        mul *= 3;
    }
    ll xsel[1<<n][n];
    ll ysel[1<<n][n];
    
    rep(i, 1<<n){
        rep(j, n){
            xsel[i][j] = abs(x[j]);
            ysel[i][j] = abs(y[j]);
            rep(k, n){
                if((i>>k) & 1){
                    xsel[i][j] = min(xsel[i][j], (ll)abs(x[j]-x[k]));
                    ysel[i][j] = min(ysel[i][j], (ll)abs(y[j]-y[k]));
                }
            }
        }
    }
    ll ans[n+1] = {inf};
    rep(i, 1<<n){
        int cnt = 0;
        rep(j, n) if((i>>j) & 1) ++cnt;
        for(int j=i; j>=0; --j){
            j &=i;
            ll cost = 0;
            rep(k, n){
                if(!((i>>k) & 1)){
                    cost += min(xsel[j][k], ysel[i - j][k]);
                }
            }
            ans[cnt] = min(ans[cnt], cost);
        }
    }

    return ans;
}

int main()
{
    int n;
    scanf("%d", &n);
    int x[n], y[n], p[n];
    rep(i, n) scanf("%d %d %d", x+i, y+i, p+i);

    ll *ans = solve(n, x, y, p);

    rep(i, n+1) printf("%lld\n", ans[i]);

    return 0;
}