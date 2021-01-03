#include <stdio.h>  
#include <stdlib.h> 

int main(){
    int x,y;
    while(scanf("%d%d",&x,&y)!=EOF){
        if(x==0&&y==0){
            printf("Origin\n");
        }
        if(x==0&&y!=0){
            printf("y-axis\n");
        }
        if(x!=0&&y==0){
            printf("x-axis\n");
        }
        if(x>0&&y>0){
            printf("1st Quadrant\n");
        }
        if(x<0&&y>0){
            printf("2nd Quadrant\n");
        }
        if(x<0&&y<0){
            printf("3rd Quadrant\n");
        }
        if(x>0&&y<0){
            printf("4th Quadrant\n");
        }
    }
}