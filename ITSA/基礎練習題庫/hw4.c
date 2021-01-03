#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int a1,b1,a2,b2;
    int c,c1,c2;
    int price=0;
    scanf("%d%d",&a1,&b1);
    scanf("%d%d",&a2,&b2);
    a1=a1*60;
    a2=a2*60;
    c1=a1+b1;
    c2=a2+b2;
    c=c2-c1;
    if(c<=120){
        if(c>30){
            price=c/30*30;
        }
    }
    if(c>120&&c<=240){
        price=120;
        c=c-120;
        if(c>30){
            price+=c/30*40;
        }
    }
    if(c>240){
        price=120;
        c-=120;
        price+=160;
        c-=120;
        if(c>30){
            price+=c/30*60;
        }        
    }
    printf("%d\n",price);

    return 0;
}