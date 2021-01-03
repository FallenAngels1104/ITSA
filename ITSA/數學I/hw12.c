#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    int b;
    while(scanf("%d",&a)!=EOF){
        b=a/0.238;
        printf("%d\n",b+1);
    }
}