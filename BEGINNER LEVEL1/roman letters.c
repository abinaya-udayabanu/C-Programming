#include <stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
	int a[10];
	char str[10];
	int n,i,j=0,sum=0,b;
	scanf("%s",str);
	n=strlen(str);
	while(j<n)
	for(i=0;i<n;i++)
	{
		if(str[i]=='I')
		{
			a[j]=1;
			scanf("%d",&a[j]);
		}
		else if(str[i]=='V')
		{
			a[j]=5;
			scanf("%d",&a[j]);
		}
		else
		{
			a[j]=10;
			scanf("%d",&a[j]);
		}
		j++;
	}
	for(j=n-1;j>=0;j--)
	{
		if(sum<=a[j])
		{
			sum=sum+a[j];
			scanf("%d",&sum);
		}
		else
		{
			sum=sum-a[j];
			scanf("%d",&sum);
		}
	}
	printf("%d",sum);
	
	return 0;
}
