#include <stdio.h>

int main(void) {
	// your code goes here
	long int a[100000];
	long int i,j,n,temp;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<=a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i+=2)
	{
		if(a[i]!=a[i+1])
		{
			printf("%ld",a[i]);
			break;
		}
	}
	return 0;
}
