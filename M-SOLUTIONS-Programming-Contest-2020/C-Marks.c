#include<stdio.h>
typedef long long int64_t;
int main()
{
    int N, K;
    scanf("%d %d", &N, &K);
    int64_t A[200000+1];
    for(int i =0; i<N;i++){
        scanf("%lld", A+i);
    }
    
    for(int i=0; i<N-K;i++){
        if(A[i]==0){
            printf("No\n");
            return 0;
        }
    }
    for(int i=0; i<N-K; i++){
        int former = A[i];
        int latter = A[i+K];
        if(former < latter){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }


    return  0;
}