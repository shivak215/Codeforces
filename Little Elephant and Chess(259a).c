#include<stdio.h>
#include<string.h>
int main()
{
    char s[8][8];
    int i,ask=0,j;
    for(i=0;i<8;i++)
        scanf("%s",s[i]);
    for(i=0;i<8;i++)
    {
        for(j=0;j+1<8;j++)
        {
            if(s[i][j]==s[i][j+1])
                {
                    printf("NO");
                    return 0;
                }
            else
            ask=1;
        }

    }
    if(ask==1)
        printf("YES");
    return 0;
}
