#include <stdio.h>
#define MAX_INDEX (10050)
int main(){

    int N;
    scanf("%d", &N);

    int ans[MAX_INDEX] = {0};
    int i, j, k;
    for(i=1;i<105;i++){
        for(j=1;j<105;j++){
            for(k=1; k<105;k++){
                int v = i*i + j*j + k*k + i*j + j*k + k*i;
                if (v<10050){
                    ans[v] +=1;
                }
            }
        }
    }
    for(i=0;i<N;i++){
        printf("%d\n", ans[i+1]);
    }

    return 0;
}