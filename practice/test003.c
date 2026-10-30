#include "math.h"
#include "stdio.h"
void main()
{
  long int i,x,y,z;
  for (i=1;i<100000;i++)
  {
    x=sqrt(i+100); /*x为加上100后开方后的结果*/
    y=sqrt(i+268); /*y为再加上168后开方后的结果*/
    if(x*x==i+100&&y*y==i+268) /*如果一个数的平方根的平方等于该数，这说明此数是完全平方数*/
    printf("\n%ld\n",i);
  }
  getchar();/*编译时因为有math库，所以在最后需要加上 lm 参数，即gcc test003.c -o test003 lm*/
} 
