#include<stdio.h>
int main()
{
	int radius;
	printf("please enter radius : ");
	scanf("%i",&radius);
	
	double area = 3.14159 * (radius * radius);
	printf("the are of a circle with %i radius is %f\n",radius,area);
}
