#include<stdio.h>
long long int c;

void ktra(long long int x,long long int y)
{
	c=y;
	y=x%y;
	if(y==0) printf("UCLN la %lld",c);
	else ktra(x,y);
}

int main()
{
	long long int a,b;
	printf("Nhap a: "); scanf("%lld",&a);
	printf("Nhap b: "); scanf("%lld",&b);
	if(a>b) ktra(a,b);
	else ktra(b,a);
	return 0;
}
