#include<stdio.h>
#include<stdlib.h>
 int main(){
     int a,b;
     int c;
     while(scanf("%d%d",&a,&b)!=EOF){
         c=a+b;
         printf("%d\n",c*c);
     }


     return 0;
 }