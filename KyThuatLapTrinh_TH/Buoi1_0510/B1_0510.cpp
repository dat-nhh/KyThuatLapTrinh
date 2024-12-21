#include<stdio.h>
int main()
{
	int n;
	long a[100];
 	a[1]=1;a[2]=1;
	for(int i=3;i<=n;i++) 
		a[i]=a[i-1]+a[i-2];
 	printf("Nhap n="); scanf("%d",&n);
 	printf("Fibonacci thu %d: %d",n,a[n]);
 	return 0;
 }
