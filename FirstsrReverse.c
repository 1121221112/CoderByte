#include <stdio.h> 
#include <string.h>

void FirstReverse(char str[]) {
  
  // code goes here  
for(int i=strlen(str)-1;i>=0;i--) putchar(str[i]);

}

int main(void) { 
   
  // keep this function call here
  FirstReverse(gets(stdin));
  return 0;
    
}