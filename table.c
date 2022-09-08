#include <stdio.h>

int main()
{
int i=1,a;
printf("Enter The Number:");
scanf("%d",&a);

/* while (i<11) {
   printf("%d x %d = %d\n",a,i,i*a);
   i++;
    
}      */
do{
   printf("%d x %d = %d\n",a,i,i*a);
   i++;
}
while (i<=10);


return 0;
}