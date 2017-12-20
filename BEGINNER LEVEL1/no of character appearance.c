#include<stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	int i,j=0,n,c=1;
	char a[30],b[30];
	scanf("%s",a);
	n=strlen(a);
	printf("%d\n",n);
	printf("%s\n",a);
	while(j<n)
	{
		for(i=j+1;i<n;i++)
		{
			if((a[j]==a[i])&&(a[i]!=8))
			{
				c=c+1;
				a[i]=8;
			}
			else if(a[j]==8)
			{
				j++;
				break;
			}
			else
			{
				continue;	
			}
		}
	printf("%c:%d\n",a[j],c);
	c=1;
	j++;
	}

	return 0;
}
