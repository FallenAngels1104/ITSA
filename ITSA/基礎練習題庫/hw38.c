#include <stdio.h>
#include <stdlib.h>

int main(){
    float c;
    float summer=0;
    float non_summer=0;
    scanf("%f",&c);
    if(c<=120){
        summer=c*2.10;
        non_summer=c*2.10;
    }
    if(c>120&&c<=330){
        summer=120*2.10;
        non_summer=120*2.10;
        c-=120;
        summer+=c*3.02;
        non_summer+=c*2.68;
    }
    if(c>330&&c<=500){
        summer=120*2.10;
        non_summer=120*2.10;
        summer+=210*3.02;
        non_summer+=210*2.68;
        c-=330;
        summer+=c*4.39;
        non_summer+=c*3.61;
    }
    if(c>500&&c<=700){
        summer=120*2.10;
        non_summer=120*2.10;
        summer+=210*3.02;
        non_summer+=210*2.68;
        summer+=170*4.39;
        non_summer+=170*3.61;
        c-=500;
        summer+=c*4.97;
        non_summer+=c*4.01;
    }
    if(c>700){
        summer=120*2.10;
        non_summer=120*2.10;
        summer+=210*3.02;
        non_summer+=210*2.68;
        summer+=170*4.39;
        non_summer+=170*3.61;
        summer+=200*4.97;
        non_summer+=200*4.01;
        c-=700;
        summer+=c*5.63;
        non_summer+=c*4.50;
    }
    printf("Summer months:%.2f\n",summer);
    printf("Non-Summer months:%.2f\n",non_summer);

    return 0;
}