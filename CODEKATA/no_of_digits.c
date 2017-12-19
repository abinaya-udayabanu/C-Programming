#include <stdio.h>

int main(void) {
	int d,b,n,c=0;
	scanf("%d",&n);
	d=n;
	while(d>0)
	{
		b=d/10;
		++c;
		d=b;
	}
	printf("%d",c);

	return 0;
}
