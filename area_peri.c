#include <stdio.h>
const float pie = 3.141;

int main()
{
   
   int a,b,c,d;
   printf("Choose the shape:-\n");
   printf("1. Square \n");
   printf("2. Rectangle \n");
   printf("3. Circle \n");
   printf(">>");
   scanf("%d",&d);

   if (d==1) {
      printf("Enter the length of the sides:");
      scanf("%d",&a);
      printf("What you want to Find:- \n");
      printf("1. Perimeter\n2. Area \n>>");
      scanf("%d",&c);
      if (c ==1) {
      printf("The Perimeter of Square is: %d",4*a);
      } else if (c ==2) {
      printf("The area of Square is: %d",a*a);
      } else {
      printf("Error: Out of order");
      }
   }
   if (d==2) {
      printf("Enter the length of Reactangle:");
      scanf("%d",&a);
      printf("Enter the breadth of Reactangle:");
      scanf("%d",&b);
      printf("What you want to Find:- \n");
      printf("1. Perimeter\n2. Area \n>>");
      scanf("%d",&c);
      if (c ==1) {
      printf("The Perimeter of Rectangle is: %d",2*(a+b));
      } else if (c ==2) {
      printf("The area of Rectangle is: %d",a*b);
      } else {
      printf("Error: Out of order");
      }  
   }    
       
      
   if (d==3) {
      printf("Enter the Radius of the circle:");
      scanf("%d",&a);
      printf("What you want to Find:- \n");
      printf("1. Circumference\n2. Area \n>>");
      scanf("%d",&c);
      if (c ==1) {
      printf("The Circumference of the circle is: %f",2*pie*a);
      } else if (c ==2) {
      printf("The area of circle is: %f",pie*a*a);
      } else {
      printf("Error: Out of order");
      }   
   }

   
   

  
      return 0;
   } 