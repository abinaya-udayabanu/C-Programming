#include <stdio.h>

int main(void) {
	
	int a;
	scanf("%d",&a);
	if(a>0)
	{
		printf("it is positive");
	}
	else if(a<0)
	{
		printf("it is negative");
	}
	else
	{
		printf("zero");
	}
	return 0;
}
