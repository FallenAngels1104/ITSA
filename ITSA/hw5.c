#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
    double a;
    double b;
    while(scanf("%lf",&a)!=EOF){
        b = a*a;
        printf("%.1lf\n",b);
    }

    return 0;
}