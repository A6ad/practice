#include <stdio.h>
struct  student {
    char name[10];
    int age;
    float grade; 
};

int main() {
   struct student s1= {"asad",22,3.5}; 
    
   struct student s2 = {.age = 42 ,.name= "mamun",.grade = 4.00};


   printf("%s\t %d %.2f\n",s1.name,s1.age,s1.grade);
   printf("%s\t %d %.2f\n",s2.name,s2.age,s2.grade);

   struct student s1c = s1;

   printf("student 1 id: %s\n",s1c.name);
   printf("student 1 grade: %.2f\n",s1c.grade);
   return 0;
}