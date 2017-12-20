#include <stdio.h>

int main(void) {
	int s1,s2,i,n;
	int h1,m1,h2,m2,h,m,s;
	scanf("%d:%d",&h1,&m1);
	scanf("%d:%d",&h2,&m2);
	s1=h1*60+m1;
	s2=h2*60+m2;
	s=s1-s2;
	if(s>60)
	{
		h=s/60;
		m=s%60;
	}
	else
	{
		h=0;
		m=s;
	}
	printf("%d:%d",h,m);
	return 0;
}
