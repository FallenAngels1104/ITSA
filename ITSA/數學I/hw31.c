#include <stdio.h>  
#include <stdlib.h> 

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        int total=0;
        for(int i=1;i<=a;i++){
            if(i%6==0&&i%12!=0){
                total=total+i;
            }
        }
        printf("%d\n",total);
    }
}