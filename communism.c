#include <stdio.h>
#include <string.h>
#define DEBUG(X) printf(#X);\
printf("\n %s",__FILE__);\
printf("\n %d", __LINE__);
void main() 
{
  int m;
  DEBUG(m);
}