#include <stdio.h>
struct parent
{
    int member;
    struct child{
       int member2; 
       char member3; 
    }b;
}p;
int main() {
   p.member = 10;
   p.b.member2 = 11;
   p.b.member3 = 'x';

    printf("Parent member: %d\n", p.member);
    printf("Child member2: %d\n", p.b.member2);
    printf("Child member3: %c\n", p.b.member3);
    return 0;
}