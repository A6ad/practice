#include <stdio.h>

struct lab_prob {
   char a[20];
   float b;
   int hour;
};

int main() {
    struct lab_prob s1;
    struct lab_prob s2;

    // Input for s1
    printf("Enter details for s1 (string, int, float):\n");
    scanf("%[^/n]s", s1.a);
    getchar(); // Limit input to 19 characters
    scanf("%d", &s1.hour);
    scanf("%f", &s1.b);

    // Input for s2
    printf("Enter details for s2 (string, int, float):\n");
    scanf("%19s", s2.a); 
    getchar();// Limit input to 19 characters
    scanf("%d", &s2.hour);
    scanf("%f", &s2.b);

    // Output
    printf("--------------\n");
    printf("s1: Name: %s, Hour: %d, Value: %.2f\n", s1.a, s1.hour, s1.b);
    printf("--------------\n");
    printf("s2: Name: %s, Hour: %d, Value: %.2f\n", s2.a, s2.hour, s2.b);

    return 0;
}