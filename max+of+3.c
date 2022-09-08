#include <stdio.h>

int main()
{
  int a,b,c;
  printf("Enter the three numbers:");
  scanf("%d%d%d",&a,&b,&c);

  if ((a==b)&&(b==c))
    printf("All the numbers are equal:-");
  else if ((a>b) && (a>c))
    printf("%d is the Greatest Number",a);
  else if ((b>a) && (b>c))
    printf("%d is the Greatest Number",b);
  else {
    printf("%d is the Greatest Number",c);
  } 
     
 return 0;
}
