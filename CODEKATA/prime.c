#include<stdio.h>
int main()
{
	int n,i,flag=0;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=flag+1;
			break;
		}
		else
		{
			continue;
		}
		
	}
	if(flag==1)
	{
		printf("it is not prime");
	}
	else
	{
		printf("it is prime");
	}
	return 0;
}
