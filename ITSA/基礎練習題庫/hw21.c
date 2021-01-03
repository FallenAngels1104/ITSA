#include <stdio.h>
#include <stdlib.h>

int main(){
    float a;
    float max,min;
    int bitch=1;
    while(scanf("%f",&a)!=EOF){
        if(bitch==1){
            max=a;
            min=a;
            bitch=0;
        }
        if(max<a){
            max=a;
        }
        if(min>a){
            min=a;
        }
    }
    printf("maximum:%.2f\n",max);
    printf("minimum:%.2f\n",min);
    return 0;
}