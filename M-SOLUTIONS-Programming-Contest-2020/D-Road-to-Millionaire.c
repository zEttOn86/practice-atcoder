#include<stdio.h>
#define rep(i,n) for(int i=0; i<(n); i++)
typedef long long ll;

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    rep(i, n) scanf("%d", a+i);
    ll x = 1000;
    rep(i, n-1){
        int s = a[i];
        int t = a[i+1];
        if(s<t){
            ll k = x/s; // number of stock
            x %=s;
            x += k*t;
        }
    }
    printf("%lld\n", x);
    return 0;
}