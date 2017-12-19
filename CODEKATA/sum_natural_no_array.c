#include <stdio.h>

int main(void) {
	int i,a[100],n,s=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		
		s+=a[i];
	}
	printf("%d",s);

	return 0;
}
