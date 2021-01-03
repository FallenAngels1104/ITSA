#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int a;
    double b;
    while(scanf("%d",&a)!=EOF){
        b=(double)a*1.6;
        printf("%.1lf\n",b);
    }

    return 0;
}