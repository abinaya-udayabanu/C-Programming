#include <stdio.h>

int main(void) {
	// your code goes here
	long int a[10000];
	long int i,j,n;
	long int temp;
	int flag=0;
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
	for(i=0;i<n;i++)
	{
		if(a[i]==a[i+1])
		{
			
			while(i<n)
			{
				if(a[i]!=a[i+1])
				{
					flag=flag+1;
					printf("%ld ",a[i]);
					break;
				}
				i++;
			}
		}
	}
	if(flag==0)
	{
		printf("UNIQUE");
	}
	
	return 0;
}
