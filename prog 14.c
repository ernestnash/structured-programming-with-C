#include<stdio.h>
int main()
{
	int radius;//the distance from the centre of the circle to the outside
	printf("please enter radius : ");
	scanf("%i",&radius);
	double area=3.14159 * (radius * radius);
	printf("the area of a circle with radius %i is %f\n",radius, area);
}
