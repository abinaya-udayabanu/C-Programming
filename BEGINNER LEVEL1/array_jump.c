#include <stdio.h>

int main(void) {
	// your code goes here
	int a[100],i=0,d,n;
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
	while(i<n)
	{
		
		if(i==n-1)
		{
			printf("true");
			break;
		}
		else if(i<n-1)
		{
			continue;
		}
		d=a[i];
		if(d<=a[n-1])
		{
			continue;
			i+=d;
		}
		else
		{
			printf("false");
			break;
		}
	}
	
	return 0;
}
