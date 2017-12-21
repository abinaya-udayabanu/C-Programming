#include<stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char a[100],b[100];
	int i,n;
	scanf("%s",a);
	n=strlen(a);
	printf("%d\n",n);
	for(i=0;i<n;i++)
	{
		b[n-i-1]=a[i];
		scanf("%c",&b[n-i-1]);
	}
	printf("%s",b);
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'||b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='O'||b[i]=='U')
		{
			continue;
		}
		else
		{
			printf("%c",b[i]);
		}
	}
	return 0;
}
