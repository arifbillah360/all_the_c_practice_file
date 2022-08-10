#include <stdio.h>

int main(){

    int i, num[10], n=10;

    for(i=0; i<n; i++){
         printf("Enter the value: ");
         scanf("%d", &num[i]);
    }
    for(i=n-1; i>=0; i--){
         printf("The value of inverse order: %d \n", num[i]);
    }
}
