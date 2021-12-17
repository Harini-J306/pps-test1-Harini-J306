#include<stdio.h>
void input(int *a, int *b);
void add(int a, int b, int *sum);
void output(int a, int b, int sum);
int main()
{
  int a,b,c;
  printf("enter two numbers\n");
  input(&a,&b);
  add(a,b,&c);
  output(a,b,c);
  return 0;
}
void input(int *a,int *b)
{
  scanf("%d%d",a,b);
}
void add(int a, int b, int *sum)
{
  *sum=a+b;
}
void output(int a, int b, int sum)
{
  printf("sum of %d+%d=%d",a,b,sum);
}