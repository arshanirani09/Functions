#include<stdio.h>
int sumd(int n)
{
	if(n==0) return 0;
	else
	return (n%10+sumd(n/10));
}

void main()
{
	int n = 12345;
	int r = sumd(n);
	printf("Input is: %d and Sum is: %d",n,r);
}
