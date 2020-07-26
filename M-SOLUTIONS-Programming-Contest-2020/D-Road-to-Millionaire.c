#include<stdio.h>

 #define max(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a > _b ? _a : _b; })
 #define min(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a > _b ? _b : _a; })

#define rep(i,n) for(int i=0; i<(n); i++)
typedef long long ll;

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    rep(i, n) scanf("%d", a+i+1);
    ll dp[n+1];
    dp[0] = 1000; // cashe
    for(int k=1; k<=n ; k++){ // sell stock day loop
        dp[k] = 0;
        for(int i=0; i<k-1; i++){// to decide to buy stock day
            int m = 99999;
            for(int j=i+1; j<k; j++){  // get minimum value between k-1 to last selling day
                m = min(m, a[j]);
            }
            dp[k] = max(dp[k], dp[i]/m*a[k]+dp[i]%m);
        }
    }
    ll ans = 0;
    rep(i, n+1) ans = max(ans, dp[i]);
    printf("%lld\n", ans);
    return 0;
}