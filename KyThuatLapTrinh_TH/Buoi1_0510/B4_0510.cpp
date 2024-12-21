#include<stdio.h>

int ktnt(int n)
{
	for(int i=2;i<n;i++)
		if(n%i==0) return 1;
	return 0;
}
int main()
{
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	if(ktnt(n)==1) printf("Khong la so nguyen to");
	else
	{
		if(n==1&&n==2) printf("Khong la so nguyen to");
		else printf("La so nguyen to");
	}
	return 0;
}
