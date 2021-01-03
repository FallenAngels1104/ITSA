#include <stdio.h>  
#include <stdlib.h>  

int main(){
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF){
        int total=0;
        if(a>b){
            int c=a;
            a=b;
            b=c;
        }
        for(int i=a;i<=b;i++){
            total=total+i;
        }
        printf("%d\n",total);
    }
}