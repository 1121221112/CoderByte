#include <stdio.h>
#include <string.h>
int main(int argc, const char *argv[])
{
    int N,row=0;
    char c;
    //fgets(&N,1,stdin);
    //c=(char)N;
    scanf("%c",&c);
    N = (int)c;
    //printf("N");
    for(int i=0;i<N;i++)
    {
        if((2*i*(i+2)+1)>N)
        {
            row=i-1;
            break;
        }
    }
    for(int i=row;i>=1;i--)
    {
        for(int k= row-i;k>=1;k--)printf(" ");
        for(int j=i*2+1;j>=1;j--)printf("%c",c);
        printf("\n");
    }
    //for(int i=0;i<=row;i++)printf(" ");
    for(int i=1;i<row;i++)
    {
        for(int k =row-i;k>=1;k--)printf(" ");
        for(int j =i*2+1;j>=1;j--)printf("%c",c);
        printf("\n");
    }
    printf("%d",(N-(2*row*(row+2)+1)));


    return 0;
}
