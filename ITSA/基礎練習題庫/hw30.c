#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int month,day;
    while(scanf("%d%d",&month,&day)!=EOF){
        if(month==1){
            if(day<=20){
                printf("Capricorn\n");
            }
            else{
                printf("Aquarius\n");
            }
        }
        if(month==2){
            if(day<=18){
                printf("Aquarius\n");
            }
            else{
                printf("Pisces\n");
            }
        }
        if(month==3){
            if(day<=20){
                printf("Pisces\n");
            }
            else{
                printf("Aries\n");
            }
        }
        if(month==4){
            if(day<=20){
                printf("Aries\n");
            }
            else{
                printf("Taurus\n");
            }
        }
        if(month==5){
            if(day<=21){
                printf("Taurus\n");
            }
            else{
                printf("Gemini\n");
            }
        }
        if(month==6){
            if(day<=21){
                printf("Gemini\n");
            }
            else{
                printf("Cancer\n");
            }
        }
        if(month==7){
            if(day<=22){
                printf("Cancer\n");
            }
            else{
                printf("Leo\n");
            }
        }
        if(month==8){
            if(day<=23){
                printf("Leo\n");
            }
            else{
                printf("Virgo\n");
            }
        }
        if(month==9){
            if(day<=23){
                printf("Virgo\n");
            }
            else{
                printf("Libra\n");
            }
        }
        if(month==10){
            if(day<=23){
                printf("Libra\n");
            }
            else{
                printf("Scorpio\n");
            }
        }
        if(month==11){
            if(day<=22){
                printf("Scorpio\n");
            }
            else{
                printf("Sagittarius\n");
            }
        }
        if(month==12){
            if(day<=21){
                printf("Sagittarius\n");
            }
            else{
                printf("Capricorn\n");
            }
        }
    }
}