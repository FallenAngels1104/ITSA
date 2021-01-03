#include <stdio.h>  
#include <stdlib.h> 

int main(){
    int num;
    int a;//百位數
    int b;//十位數
    int c;//個位數
    while(scanf("%d",&num)!=EOF){
        a=num/100;
        b=(num-a*100)/10;
        c=(num-a*100-b*10);
        if((a*a*a+b*b*b+c*c*c)==num){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
}