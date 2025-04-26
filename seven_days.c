#include <stdio.h>

int main() {
    int day;
    scanf("%d",&day);
    switch (day)
    {
   case 1:
   printf("Saturday");
   break;
   case 2:
   printf("Sunday");
   break;
   case 3:
   printf("monday");
   break;
   case 4:
   printf("tueday");
   break;
   case 5:
   printf("wednesday");
   break;
   case 6:
   printf("thursday");
   break;
   case 7:
   printf("friday");
   break; 
    default:
    printf("invalid");
        break;
    }
    return 0;
}