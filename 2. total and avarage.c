#include<stdio.h>
int main(){
 float math, en, bn, phy, cse, total, avarage;

printf("Enter the number of Math: ");
scanf("%f", &math);

printf("Enter the number of English: ");
scanf("%f", &en);

printf("Enter the number of Bangle: ");
scanf("%f", &bn);

printf("Enter the number of Physics: ");
scanf("%f", &phy);

printf("Enter the number of CSE: ");
scanf("%f", &cse);

total = math + en + bn + phy + cse;
avarage = total / 5;

printf("Total Number: %f /n", total);
printf("Avarqage Number: %f", avarage);

return 0;
}
