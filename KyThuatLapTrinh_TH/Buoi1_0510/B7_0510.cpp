#include<stdio.h>
int t=0;
void ktd(int n)
{
	t+=n%10;
	int a=n/10;
	if(a>0) ktd(a);
}
int main()
{
	int n;
	printf("Nhap n="); scanf("%d",&n);
	ktd(n);
	if(t==9) printf("La so dep");
	else printf("Khong la so dep");
	return 0;
}
