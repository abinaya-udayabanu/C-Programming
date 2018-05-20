#include <stdio.h>

int main(void) {
	// your code goes here
	long int a[10000];
	long int i,n,j,k;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(a[i]+a[j]==a[k])
				{
					printf("%ld %ld %ld\n",a[i],a[j],a[k]);
				}
			}
		}
	}
	return 0;
}
