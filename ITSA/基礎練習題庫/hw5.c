#include<stdio.h>
#define MAX 8
int main(void){
    int n,a[8];
    int switchs=1;
    while(scanf("%d",&n)!=EOF){
        int i=0;
        if(n>0){
            for(int j=0;j<8;j++){
                a[j]=0;
            }
            while (n>0){   //迴圈過程的始終，判斷n是否能被2除盡
                a[i] = n%2;   //用陣列儲存每次除以2之後的餘數，即斷定奇偶性，對應二進位制位上數值
                i = i+1;
                n = n/2;
            }
            for(int i=7;i>=0;i--)
                printf("%d",a[i]);
            printf("\n");
        }
        if(n<0){
            n=-1*n;
            for(int j=0;j<8;j++){
                a[j]=1;
            }
            while (n>0){   //迴圈過程的始終，判斷n是否能被2除盡
                a[i] = n%2;   //用陣列儲存每次除以2之後的餘數，即斷定奇偶性，對應二進位制位上數值
                i = i+1;
                n = n/2;
            }
            for(int i=7;i>=0;i--)
                printf("%d",a[i]);
            printf("\n");
        }
    }
    return 0;
}