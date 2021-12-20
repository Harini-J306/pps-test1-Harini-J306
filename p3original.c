#include<stdio.h>
int input(int a)
{    
  printf("enter a number\n");
  scanf("%d",&a);
  return a;
}
int add(int a,int b,int sum)
{
    sum=0;
  sum=a+b;
  return sum;
}
void output(int a,int b,int sum)
{
  printf("sum is %d + %d is %d\n",a,b,sum);
}
int main()
{
  int a,b,sum,a1,a2,a3;
  a1=input(a);
  a2=input(a);
  a3=add(a1,a2,sum);
  output(a1,a2,a3);
  return 0;
}