#include <stdio.h>  
#include <stdlib.h>  

int main(){
    int a,b;
    double money;
    while(scanf("%d%d",&a,&b)!=EOF){
        if(a>120){
            money=60*b;
            a-=60;
            money+=60*b*1.33;
            a-=60;
            money+=a*b*1.66;
            printf("%.1lf\n",money);
            continue;
        }
        if(a>60&&a<=120){
            money=60*b;
            a-=60;
            money+=a*b*1.33;
            printf("%.1lf\n",money);
            continue;
        }
        else{
            money=a*b;
            printf("%.1lf\n",money);
            continue;
        }
    }
}