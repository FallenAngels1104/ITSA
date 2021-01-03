#include <stdio.h>  
#include <stdlib.h>  

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        long long int total=1;
        if(a==0){
            printf("1\n");
        }
        for(int i=1;i<=a;i++){
            total=total*i;
        }
        printf("%lld\n",total);    
    }
}