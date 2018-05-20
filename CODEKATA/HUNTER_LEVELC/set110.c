#include <stdio.h>

int main(void) {
	// your code goes here
	long int a[100000],b[100000];
	long int n,k,i,j;
	int flag;
	scanf("%ld",&n);
	scanf("%ld",&k);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	for(i=0;i<k;i++)
	{
		scanf("%ld",&b[i]);
	}
	if(n<k)
	{
		printf("NO");
	}
	else
	{
		for(i=0;i<k;i++)
		{
			flag=0;
			for(j=0;j<n;j++)
			{
				if(b[i]==a[j])
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				printf("NO");
			}
		}
	}
	if(flag==1)
	{
		printf("YES");
	}
	return 0;
}
