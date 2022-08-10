#include<stdio.h>
int main()
{
int n, reverse=0, rem;
    printf("Enter the number: ");
    scanf("%d", &n);

 while(n!=0)
 {
 rem=n%10;
 reverse=reverse*10+rem;
 printf("reverse: %d \n",reverse);
 n/=10;
 }
    printf("The reversal is: %d\n",reverse);
    return 0;
}
