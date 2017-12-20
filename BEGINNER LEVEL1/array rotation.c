#include <stdio.h>

int main(void) {
	// your code goes here
	int a[100],b[100],i,j=0,n,k;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(j<k)
	{
		for(i=0;i<n;i++)
		{
			if(i==0)
			{
				b[n-1]=a[i];
				scanf("%d",&b[n-1]);
			}
			else
			{
				b[i-1]=a[i];
				scanf("%d",&b[i-1]);
			}
			
		}
		for(i=0;i<n;i++)
		{
			a[i]=b[i];
		}
	j++;
	
	}
	for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
	
	return 0;
}
