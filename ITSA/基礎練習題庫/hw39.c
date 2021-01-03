#include <stdio.h>
#include <stdlib.h>

int main(){
    int times;
    scanf("%d",&times);
    int Score1[times];
    int Score2[times];
    int Score3[times];
    for(int i=0;i<times;i++){
        scanf("%d%d%d",&Score1[i],&Score2[i],&Score3[i]);
    }
    for(int i=0;i<times;i++){
        if(Score1[i]>=60&&Score2[i]>=60&&Score3[i]>=60){
            printf("P\n");
        }
        else if((Score1[i]<60&&Score2[i]>=60&&Score3[i]>=60)||(Score2[i]<60&&Score1[i]>=60&&Score3[i]>=60)||(Score3[i]<60&&Score2[i]>=60&&Score1[i]>=60)){
            if((Score1[i]+Score2[i]+Score3[i])>=220){
                printf("P\n");
            }
            else{
                printf("M\n");
            }
        }
        else if((Score1[i]<60&&Score2[i]<60&&Score3[i]>=80)||(Score2[i]>=80&&Score1[i]<60&&Score3[i]<60)||(Score3[i]<60&&Score2[i]<60&&Score1[i]>=80)){
            printf("M\n");
        }
        else{
            printf("F\n");
        }
    }
    return 0;
}