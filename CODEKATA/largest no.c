#include<stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d\n",&a);
	scanf("%d\n",&b);
	scanf("%d\n",&c);
	if((b<a)&&(a>c))
	{
		printf("a is the largest number");
	}
	else if((a<b)&&(b>c))
	{
		printf("b is the largest number");
	}
	else
	{
		printf("c is the largest number");
	}
	return 0;
	
	
}
