#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    int days=0,hours=0,minutes=0;
    scanf("%d",&a);
    while(a>=86400){
        days++;
        a-=86400;
    }
    while(a>=3600){
        hours++;
        a-=3600;
    }
    while(a>=60){
        minutes++;
        a-=60;
    }
    printf("%d days\n",days);
    printf("%d hours\n",hours);
    printf("%d minutes\n",minutes);
    printf("%d seconds\n",a);

}