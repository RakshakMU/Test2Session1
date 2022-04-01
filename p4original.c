#include<stdio.h>
int input()
{
  int x;
  printf("enter the value of fibonacci number/n");
  scanf("%d",&x);
  return x;
  
}
int find_fibo(int n)
{
  int a=0,b=1,c;
  for(int i=2;i<=n-1;i++)
    {
      c=a+b;
      a=b;
      b=c;
    }
    return c;
}
void output(int n,int c)
{
  printf(" nth fibonacci of %d is %d",n,c);
}
int main()
{
  int n,c;
  n=input();
  c=find_fibo(n);
  output(n,c);
  return 0;
}