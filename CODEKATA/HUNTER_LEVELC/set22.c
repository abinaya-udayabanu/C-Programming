#include <stdio.h>

int main(void) {
	// your code goes here
	long int a[100000];
	long int n,i,k,j,t;
	scanf("%ld",&n);
	scanf("%ld",&k);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("%d",a[k-1]);
	return 0;
}
