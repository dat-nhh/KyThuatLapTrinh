#include<stdio.h>
long long int s=0;
int tinh(int i, int n)
{
	s+=i*i;
	if(i<n) tinh(i+1,n);
	else return s;
}
int main()
{
	int n;
	printf("Nhap n: "); scanf("%d",&n);
	printf("Ket qua: %lld",tinh(1,n));
	return 0;
}
