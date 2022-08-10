#include<stdio.h>
int main(){
float area, cir, r, pai;
pai= 3.1416;

printf("Enter Redius: ");
scanf("%f" , &r);

area = pai * (r * r);
printf("The Radius: %f", area);

cir = 2 * pai * r;
printf("The circumference: %f", cir);

return 0;}

