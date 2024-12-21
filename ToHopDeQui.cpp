#include<stdio.h>

int k,n;

int th(int k, int n)
{
	if(k==0 || k==n) return 1;
	else
		return th(k-1,n-1)+th(k,n-1);
}

int main()
{
	n=5;
	k=3;
	printf("To hop chap %d cua %d la %d",k,n,th(k,n));
	return 0;
}
