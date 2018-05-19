#include <stdio.h>

int main(void) {
	// your code goes here
	long int a[100000];
	long int t=0,s=1,n,i,j,h,temp;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]>=a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		s=1;
		for(j=(n-i);j>1;j--)
		{
			s=s*10;
		}
		t=t+a[i]*s;
	}
	printf("%ld",t);
	return 0;
}
