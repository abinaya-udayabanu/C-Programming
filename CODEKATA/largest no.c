#include<stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d\n",&a);
	scanf("%d\n",&b);
	scanf("%d\n",&c);
	if((b<a)&&(a>c))
	{
		printf("%d",a);
	}
	else if((a<b)&&(b>c))
	{
		printf("%d",b);
	}
	else
	{
		printf("%d",c);
	}
	return 0;
	
	
}
