#include <stdio.h>
int length(char x[])
{
    int count = 0;
 for(int i=0;x[i]!='\0';i++)
 {
    count++;
 }
 return count;
}
int main() {
    int n;
    char s[100];
    scanf("%d",&n);
   
    while(n--)
   {
    scanf("%s",s);
    int size = length(s);
    if(size>10)
    {
        printf("%c%d%c\n",s[0],size-2,s[size-1]);
    }
    else{
        printf("%s\n",s);
    }
   }
   
    
    return 0;
}