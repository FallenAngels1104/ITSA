#include<stdio.h>
#include<stdlib.h>


int main(){
    int a;
    int ten=0,five=0;
    while(scanf("%d",&a)!=EOF){
         while(a>=10){
             ten++;
             a-=10;
         }
         while(a>=5){
             five++;
             a-=5;
         }
         printf("NT10=%d\n",ten);
         printf("NT5=%d\n",five);
         printf("NT1=%d\n",a);
    }


     return 0;
 }