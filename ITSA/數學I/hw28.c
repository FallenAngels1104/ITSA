#include <stdio.h>  
#include <stdlib.h> 

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        for(int i=1;i<=a;i++){
            if(i%35==0){
                printf("%d",i);
                if(a-i>35){
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}