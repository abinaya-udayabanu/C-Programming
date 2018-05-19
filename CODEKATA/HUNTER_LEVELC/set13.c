#include <stdio.h>

int main(void) {
	// your code goes here
	long int  n,i;
	long int a[100000];
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	if(a[i]==i)
	{
		printf("%ld ",a[i]);
	}
	}
	return 0;
}
