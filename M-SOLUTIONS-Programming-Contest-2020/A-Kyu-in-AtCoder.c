#include <stdio.h>

int main()
{
    int X;
    scanf("%d", &X);
    if(X>=400 && X<600){
        printf("%d",8);
        printf("\n");
    }else if(X>=600 && X<800){
        printf("%d",7);
        printf("\n");
    }else if(X>=800 && X<1000){
        printf("%d",6);
        printf("\n");
    }else if(X>=1000 && X<1200){
        printf("%d",5);
        printf("\n");
    }else if(X>=1200 && X<1400){
        printf("%d",4);
        printf("\n");
    }else if(X>=1400 && X<1600){
        printf("%d",3);
        printf("\n");
    }else if(X>=1600 && X<1800){
        printf("%d",2);
        printf("\n");
    }else if(X>=1800 && X<2000){
        printf("%d",1);
        printf("\n");
    }

    return 0;
}