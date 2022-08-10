#include<stdio.h>
int main(){
float c, meter, kilometer;

printf("Enter Length: ");
scanf("%f", &c);

meter = c * 0.01;
kilometer = c * 0.00001;

printf("Center to Meter: %f \n", meter);
printf("Center to Kilometer: %f", kilometer);

return 0;
}
