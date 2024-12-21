#include <stdio.h>
#include <math.h>
////
int x;
long long n;
////
long long process(long long i)
{
	if(i==0) return 1;
	long long t= process(i/2);
	long long temp=(t*t)%10000;
	if(i%2==1)
	{
		temp=temp*x;
	}
	return temp%10000;
}
////
int main()
{
	printf("Nhap x= ");
	scanf("%d",&x);
	printf("Nhap n= ");
	scanf("%lld",&n);
	printf("4 so cuoi cua luy thua %d^%lld= %lld",x,n,process(n));
	return 0;
}
