#include <stdio.h>
#include <stdlib.h>

int main(){
    float a;
    int b;
    float ans;
    while(scanf("%f%d",&a,&b)!=EOF){
        if(b==1){
            ans=(a-80)*0.7;
            printf("%.1f\n",ans);
        }
        if(b==2){
            ans=(a-70)*0.6;
            printf("%.1f\n",ans);
        }
    }
    return 0;
}
