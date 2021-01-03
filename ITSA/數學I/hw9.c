#include<stdio.h>
#include<stdlib.h>

int main(){
    //請撰寫一個程式，計算2的 ｉ次方的值。(提示：利用位移運算元)
    int a;
    //int c;
    while(scanf("%d",&a)!=EOF){
        if(a>31){//如果a>31 按照題目要求輸出
            printf("Value of more than 31\n");
            continue;
        }
        a=2<<a-1;//將2移動a-1個位元 就是2的a次方
        printf("%d\n",a);
    }

    return 0;
}
