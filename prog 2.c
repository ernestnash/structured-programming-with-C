#include <stdio.h>
int main()
{
	char ch;
	char str[100];
	printf("enter any character\n");
	scanf("%c",&ch);
	printf("entered character is %c\n",ch);
	printf("enter any string (upto 100 characters)\n");
	scanf("%s",&str);
	printf("entered string is %s\n",str);
}
