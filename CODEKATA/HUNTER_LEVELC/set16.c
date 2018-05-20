#include <stdio.h>

int main(void) {
	// your code goes here
	long int a[10000];
	int flag=0;
	long int n,i,j,temp;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		for(j=i-1;j>=0;j--)
		{
			if(a[i]==a[j])
			{
				flag=1;
				printf("%ld",a[i]);
				break;
			}
		}
		if(flag==1)
		break;
		
	}
	if(flag==0)
	{
		printf("UNIQUE");
	}
	return 0;
}
