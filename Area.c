Program for Area of the Circle and Triangle
#include<stdio.h>
 
int main() {
   float r, A;
 
   printf("\nEnter the radius of Circle : ");
   scanf("%d", &r);
 
   A = 3.14 * r * r;
   printf("\nArea of Circle : %f", A);
 
   return (0);
}
for Area of the Triangle
#include<stdio.h>
int main()
{
	float base,height,area;
	printf("enter base of triangle: ");
	scanf("%f",&base);
	
	printf("enter height of the triangle: ");
	scanf("%f",&height);
	area=(base*height)/2;
	printf("Area of Triangle: %f\n",area);
	return 0;
}
