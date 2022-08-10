#include<stdio.h>

int main(){
int i=0, n;

printf("Enter the value:");
scanf("%d", &n);

do {
    n /= 10;
    ++i;
  } while (n != 0);

printf("The value is: %d\n", i);
return 0;

}
