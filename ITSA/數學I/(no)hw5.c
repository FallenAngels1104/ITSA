#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
    double a;
    while(scanf("%lf",&a)!=EOF){
        printf("%.1lf\n",a*a);
    }

    return 0;
}