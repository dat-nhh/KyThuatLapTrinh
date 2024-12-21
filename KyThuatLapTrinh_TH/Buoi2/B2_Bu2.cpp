#include<stdio.h>
long long int gt=1;

void tinh(int n)
{
	if(n==0) printf("Giai thua bang %lld",gt);
	else
	{
		gt*=n;
		n--;
		tinh(n);
	}
}
int main()
{
	int n;
	do
	{
		printf("Nhap n (1<=n<=17): ");
		scanf("%d",&n);
	}
	while((n<1)&&(n>17));
	tinh(n);
	return 0;
}
