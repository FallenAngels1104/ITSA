#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    //int c;
    while(scanf("%d",&a)!=EOF){
        if(a>31){
            printf("Value of more than 31\n");
            continue;
        }
        a=2<<a-1;
        printf("%d\n",a);
    }

    return 0;
}