#include <stdio.h>

int main(void) {
	// your code goes here
	int n,p,i=1,c=1;
	scanf("%d",&n);
	scanf("%d",&p);
	c=n;
	while(i<p)
	{
		c=c*n;
		i++;
	}
	printf("%d power of %d is %d",n,p,c);
	return 0;
}
