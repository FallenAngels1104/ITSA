#include <stdio.h>  
#include <stdlib.h> 

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        int total=0;
        for(int i=1;i<=a;i++){
            if(i!=a){
                total=total+i;
                printf("%d + ",i);
            }
            if(i==a){
                total=total+i;
                printf("%d = %d\n",i,total);
            }
        }
    }
}