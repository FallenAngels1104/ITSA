#include <stdio.h>
#include <stdlib.h>

int main()
{
    int word, i;
    while(scanf("%d",&word)!=EOF)
    {
        if(word==2)
            {
                printf("is_prime\n");
            }
        for(i=2;i<word;i++)
            {
                if(word%i==0)
                    {
                        printf("NO\n");
                        break;
                    }
                if(i==word-1)
                    {
                        printf("YES\n");
                    }
            }
    }
    return 0;
}
