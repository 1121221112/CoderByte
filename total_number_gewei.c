#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, const char *argv[])
{   
    int n,i,j;
    char a[1000],b='0';
    scanf("%s",a);
    i=strlen(a);//拆分字符串
    while(b<='9')//统计1~9每一个数字出现次数
    {
        n=0;
        for(j=0;j<i;j++)
        {
            if(a[j]==b)
                n++;
        }
        if(n!=0)
            printf("%c:%d\n",b,n);//如出现次数不为0，输出
        b+=1;
    }
    return 0;
}
