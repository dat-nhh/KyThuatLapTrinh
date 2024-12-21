//b1.2: In ra day Fibonacci gom N phan tu.
#include<stdio.h>
#define max 100

int n;
long long int a[max];

void fibo(int n)
{
	a[1]=1; a[2]=2;
	for(int i=2;i<=n;i++)
		a[i]=a[i-1]+a[i-2];
}

int main()
{
	scanf("%d",&n); //nhap n
	fibo(n);
	for(int i=1;i<=n;i++)
		printf("%lld\n",a[i]); //ket qua
	return 0;
}
