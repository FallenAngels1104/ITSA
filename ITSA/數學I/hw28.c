#include <stdio.h>  
#include <stdlib.h> 

int main(){
    //試寫一個程式，讓使用者輸入任意正整數 N ，可計算出 1 到 N 之間屬於 5 和 7 的倍數的數值。
    int a;
    while(scanf("%d",&a)!=EOF){
        for(int i=1;i<=a;i++){//讓i從1找到a
            if(i%35==0){//滿足5和7的倍數就是35 所以mod35就好
                printf("%d",i);
                if(a-i>35){//因為題目要求要有空格 但最後一個不能有
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}
