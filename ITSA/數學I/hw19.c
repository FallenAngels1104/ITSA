#include <stdio.h>  
#include <stdlib.h>  

int main(){
    int a;
    double b;
    while(scanf("%d",&a)!=EOF){
        if(a<=800){
            b=a*0.9;
        }
        if(a>800&&a<1500){
            b=a*0.9*0.9;
        }
        if(a>=1500){
            b=a*0.9*0.79;
        }
        printf("%.1lf\n",b);
    }
}