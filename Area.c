Area of the Circle program
#include<stdio.h>
 
int main() {
   float r, A;
 
   printf("\nEnter the radius of Circle : ");
   scanf("%d", &r);
 
   A = 3.14 * r * r;
   printf("\nArea of Circle : %f", A);
 
   return (0);
}
