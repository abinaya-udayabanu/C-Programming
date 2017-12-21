#include <stdio.h>

int main(void) {
	// your code goes here
	int a[100],i=0,d,flag=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	for(i=0;i<n;i+=d)
	{
		d=a[i];
		if(i==n-1)
		{
			flag=flag+1;
			break;
			
		}
		else if(i<n-1)
		{
			continue;
		}
	}
	if(flag==0)
	{
		printf("true");
	}
	else
	{
		printf("false");	
	}
	
	return 0;
}
