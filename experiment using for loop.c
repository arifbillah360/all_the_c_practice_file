#include <stdio.h>

void main()
{
  int n,i,k;
  long sum=0;
  long int t=1;
  printf("Input the number of terms : ");
  scanf("%d",&k);
  for(i=1;i<=k;i++)
  {
     printf(" %ld +",t);

     sum=sum+t;
     t=(t*10)+1;
  }
  printf("\nThe Sum is : %ld\n",sum);
}
