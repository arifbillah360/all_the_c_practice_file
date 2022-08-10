#include <stdio.h>
int main()
{
   int a, b, p;
   printf("Enter first number: ");
   scanf("%d", &a);
   printf("Enter second number: ");
   scanf("%d", &b);

   p = a * b;
   printf("Sum of the entered numbers: %d", p);
   return 0;
}
