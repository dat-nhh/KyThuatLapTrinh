#include<stdio.h>
int ktra(int a[], int n)
{
	for(int j=1;j<100;j++)
 		if(n==a[j]) return 1;
 	return 0;
}
int main()
{
	int n;
	int a[100];
 	a[1]=1;a[2]=1;
	for(int i=3;i<100;i++) 
		a[i]=a[i-1]+a[i-2];
 	printf("Nhap x="); scanf("%d",&n);
 	if(ktra(a,n)==1) printf("Thuoc fibonacci");
 	else printf("Khong thuoc fibonacci");
 	return 0;
 }
