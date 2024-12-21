#include<stdio.h>
int kthh(int n)
{
	int t=0;
	for(int i=1;i<n;i++)
		if(n%i==0) t+=i;
	return t;
}
int main()
{
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	if(kthh(n)==n) printf("La so hoan hao");
	else printf("Khong la so hoan hao");
	return 0;
}
