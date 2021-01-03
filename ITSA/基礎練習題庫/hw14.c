#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define max 1001
int main(){
    int len;
    char string[max];
    char reverse[max];
    while(scanf("%s",string)!=EOF){
        len=strlen(string);
        for(int i=0;i<=len;i++){
            reverse[i]='\0';
        }
        for(int i=len-1;i>=0;i--){
            reverse[i]=string[len-i-1];
        }
        if(strcmp(reverse,string)==0){
            printf("YES\n");
            }
        else{
            printf("NO\n");
            }
    } 
}