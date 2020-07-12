#include <stdio.h>
#include <stdbool.h>
#define MAX_INDEX (200001)

typedef long long int64_t;

int64_t modpow(int64_t a, int64_t n, int64_t mod){
    if(n==0){
        return 1;
    }
    if(n%2==1){
        return (a*modpow(a, n-1, mod)%mod);
    }
    int64_t t = modpow(a, n/2, mod);
    return (t*t % mod );
}

int main(){
    int N;
    char X[MAX_INDEX];
    scanf("%d%s", &N, X);
    int i, cnt = 0;

    // popcnt
    for(i=0;i<N;i++){
        X[i] -= '0'; // %d, '0' -> 48
        if(X[i] == 1){
            cnt++;
        }
    }
    
    int64_t mx = 0, px = 0;
    bool is0 = false;
    for(i=0;i<N;i++){
        px += X[i] * 
    }

}