#include <stdio.h>
int s,a1,b1;
int input()
{
  printf("Enter 2 numbers\n");
  scanf("%d%d",&a1,&b1);
  return 0;
}
int add(int a,int b)
{
  int sum=a+b;
  return sum;
}
void output()
{
printf("%d",s);
}
void main()
{
  input();
  s=add(a1,b1);
  output();
}