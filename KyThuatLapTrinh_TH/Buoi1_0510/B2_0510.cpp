#include<stdio.h>
int main()
{
	int n;
	int a[100];
 	a[1]=1;a[2]=1;
	for(int i=3;i<100;i++) 
		a[i]=a[i-1]+a[i-2];
 	printf("Nhap n="); scanf("%d",&n);
 	printf("Fibonacci n phan tu:\n");
 	for(int j=1;j<=n;j++) printf("%d ",a[j]);
 	return 0;
 }
