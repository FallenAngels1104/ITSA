#include <stdio.h>  
#include <stdlib.h>  

int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        int total=i*i;
        printf("%d*%d=%d\n",i,i,total);
    }
}