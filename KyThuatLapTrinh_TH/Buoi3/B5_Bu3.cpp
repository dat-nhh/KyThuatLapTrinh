#include<stdio.h>
int a[100];
int s=0;
int tong(int a[],int i,int n)
{
	s+=a[i];
	if(i<n) tong(a,i+1,n);
	else return s;
}
int main()
{
	int n;
	printf("Nhap n: "); scanf("%d",&n);
	printf("Nhap mang\n");
	for(int i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Ket qua: %d",tong(a,0,n));
	return 0;
}
