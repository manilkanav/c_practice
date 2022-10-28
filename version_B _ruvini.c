#include<stdio.h>
# define SIZE 12

int main(vooid)
{
  int a[ SIZE ] ;
  int i;
  int total = 0; // sum of array
  
  for( i = 0; i < SIZE; ++i)
  { 
  printf("\na[ i ] =");
  scanf("%d",&a[ i ]); 
  }
  for( i = 0; i < SIZE; ++i)
  total += a[ i ];
  
  printf("Total of array elements is %d \nl", total);
   
  return 0;
}
