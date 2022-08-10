#include <stdio.h>

int main(){
/*
int marks[10], i, n , sum=0, average;

printf("Enter the value of elements: ");
scanf("%d", &n);

for(i=0; i<n; i++){
    printf("Enter the number %d =", i+1);
    scanf("%d", &marks[i]);

    sum += marks[i];
}

average = sum/n;
printf("Average = %d", average);
*/
 int marks[10], i, n=5, sum=0, average;

 for(i=1; i <= n; i++){
    printf("Enter the value: ");
    scanf("%d", &marks[i]);
    sum = sum+marks[i];
 }

 average = sum/n;
    printf("the value: %d", average);








}
