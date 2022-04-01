#include<stdio.h>
int input_number()
{
  int x;
  printf("enter a number\n");
  scanf("%d",&x);
  return x;
}
int is_prime(int n)
{
  if(n==0||n==1)
    return 0;
  if(n==2)
    return 1;
  for(int i=2;i<n/2;i++)
    {
      if(n%i==0)
        return 0;
    }

  return 1;
  
}
void output(int n,int is_prime)
{
  if(is_prime==1)
  {
    printf("%d is a prime number\n",n);
  }  
  else
    printf("%d is not a prime number\n",n);
  
}
int main()
{
  int a,b;
  a=input_number();
  b= is_prime(a);
  output(a,b);
  return 0;
}