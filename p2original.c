#include <stdio.h>
int s,a,b;
int input()
{
printf("enter 2 numbers\n");
scanf("%d %d",&a,&b);
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
int main()
{
  input();
  s=add(a,b);
  output();
}