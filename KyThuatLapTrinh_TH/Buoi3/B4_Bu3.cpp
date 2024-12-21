#include<stdio.h>
long long int s=0;
long long int t=1;
int tinh(int i, int n)
{
	t*=i;
	s+=t;
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
