#include <stdio.h>
#include <math.h>
int main(){
    int L, R, d;
    scanf("%d %d %d", &L, &R, &d);
    int cnt, i;
    cnt=0;
    for(i=L; i<=R;i++){
        if(i%d==0){
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}