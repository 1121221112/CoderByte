#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, const char *argv[])
{   
    int n,i,j;
    char a[1000],b='0';
    scanf("%s",a);
    i=strlen(a);//����ַ���
    while(b<='9')//ͳ��1~9ÿһ�����ֳ��ִ���
    {
        n=0;
        for(j=0;j<i;j++)
        {
            if(a[j]==b)
                n++;
        }
        if(n!=0)
            printf("%c:%d\n",b,n);//����ִ�����Ϊ0�����
        b+=1;
    }
    return 0;
}
