#include <stdio.h>
struct lab_prob
{
   char a[20];
   float b;
   int hour;
};
int main() {
    struct lab_prob s1;
    struct lab_prob s2;
    scanf("%s",s1.a);
    scanf("%d",&s1.hour);
    scanf("%f",&s1.b);


    scanf("%s",s2.a);
    scanf("%d",&s2.hour);
    scanf("%f",&s2.b);


    printf("s1: %s %d %.2f\n",s1.a,s1.hour,s1.b);
    printf("--------------\n");
    printf("s2: %s %d %.2f\n",s2.a,s2.hour,s2.b);
  

   
   

    
    return 0;
}