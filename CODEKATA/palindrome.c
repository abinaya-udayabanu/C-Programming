#include<stdio.h>
int main()
{
	int n,b,i,d,rev=0;
	scanf("%d",&n);
	b=n;
	while(b>0)
	{
		d=b%10;
		rev=rev*10+d;
		b=b/10;
		
		
	}
	printf("%d",rev);
	return 0;
}

