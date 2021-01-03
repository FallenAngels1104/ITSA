#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,p;
    double r,ans=0;
    scanf("%lf%d%d",&r,&n,&p);
    ans=(double)p;
    for(int i=1;i<=n;i++){
        if(i==1){
            ans+=ans*r;
            continue;
        }
        ans+=(double)p;
        ans+=ans*r;  
    }
    //p=(int)ans;
    printf("%.0lf\n",ans);
    return 0;
}