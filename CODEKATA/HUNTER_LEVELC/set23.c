#include <stdio.h>
#include<string.h>
int top=-1;
int front=0;
int stack[30];
void push(char a)
{
	top++;
	stack[top]=a;
}
void pop()
{
	top--;
}
int main(void) {
	// your code goes here
	char s[30];
	int i,n;
	scanf("%[^\n]s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		char b=s[i];
		push(b);
	}
	for(i=0;i<n/2;i++)
	{
		if(stack[top]==stack[front])
		{
			pop();
			front++;
		}
		else
		{
			printf("NO");
			break;
		}
	}
	if(n/2==front)
	{
		printf("YES");
	}
	return 0;
}
