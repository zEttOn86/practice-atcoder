#include <stdio.h>
#define MAX_INDEX (100)
int main(){
    int N;
    int a[MAX_INDEX];
    int i;
    
    scanf("%d", &N);
    for(i=0;i<N;i++){
        scanf("%d", &a[i]);
    }

    int cnt=0;
    for(i=0;i<N;i++){
        if(i%2 == 0 && a[i]%2 != 0){
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}