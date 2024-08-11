//this is the first programme
#ifndef TAG
#endif
#define TAG
#include<stdio.h>
#define small 10
#define medium 20
#define big 30
#define very_big 40
int add (int,int);
int main()
{
  int a,b,c;
  a=small;
  b=big;

  #ifdef TAG
  printf("hello\n");
  #endif
  printf("Sathish\n");
  printf("the addition is: %d\n",c=a+b);
}
int add (int one,int two)
{
  return one+two;
}