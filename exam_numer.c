#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data
{
    char r[15];
    int x,y;
}d[1024];


int main(int argc, const char *argv[])
{
    int n,i,j,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",d[i].r);
        scanf("%d",&d[i].x);
        scanf("%d",&d[i].y);
    }
    scanf("%d",&m);
    int b[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(d[j].x==b[i])
            {
                printf("%s %d",d[j].r,d[j].y);
                printf("\n");
            }
        }
    }


    return 0;
}
