#include <stdio.h>
#include <stdlib.h>

int main(){
    int total=0;
    int a;
    while(scanf("%d",&a)!=EOF){
        for(int i=0;i<=a;i++){
            if(i%3==0){
                total+=i;
            }
        }
        printf("%d\n",total);
        total=0;
    }
}