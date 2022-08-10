
#include<stdio.h>

int main(){
 // Start code here
    int num, rev = 0;

    printf("Enter any number to find reverse: ");
    scanf("%d", &num);

    while(num!=0){
        rev = (rev * 10) + (num % 10);
        num/=10;
    }
    printf("Reverse = %d", rev);

    return 0;
}
