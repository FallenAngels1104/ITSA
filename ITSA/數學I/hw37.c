#include <stdio.h>  
#include <stdlib.h> 

int main(){
    //試撰寫一程式，輸入 x 、 y 座標值，判斷該點位於那一個象限或是在座標軸上。舉例來說，若輸入的座標值為 (0,0) ，則優先輸出為Origin(原點)，若輸入的座標值為 (4,0)，則輸出即為x-axis(x 軸)；若輸入的座標值為 (3,-2) ，則輸出即為 4th Quadrant(第四象限)
    int x,y;
    while(scanf("%d%d",&x,&y)!=EOF){//輸入兩個座標
        if(x==0&&y==0){//原點座標
            printf("Origin\n");
        }
        if(x==0&&y!=0){//x=0為y軸
            printf("y-axis\n");
        }
        if(x!=0&&y==0){//y=0為x軸
            printf("x-axis\n");
        }
        if(x>0&&y>0){//第1象限
            printf("1st Quadrant\n");
        }
        if(x<0&&y>0){//第2象限
            printf("2nd Quadrant\n");
        }
        if(x<0&&y<0){//第3象限
            printf("3rd Quadrant\n");
        }
        if(x>0&&y<0){//第4象限
            printf("4th Quadrant\n");
        }
    }
}
