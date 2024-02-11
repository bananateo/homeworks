#include <stdio.h>
#define DEFINE_ARRAY int arr[5]
#define PRINT_ARRAY for(int i=0; i<5; i++)\
{\
printf("%d",arr[i]);}
void main()
{
  DEFINE_ARRAY;
  for(int i =0;i<5;i++)
    {
      scanf("%d",&arr[i]);
    }
  PRINT_ARRAY;
}