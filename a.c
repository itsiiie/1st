#include <stdio.h>

int main()
{
  int  a;
  printf("Enter a number:");
  scanf("%d",&a);
  if (a==2) {
    printf("Monday");
  } else if (a!=2) {
    printf("Sunday");
  }
  return 0;
}