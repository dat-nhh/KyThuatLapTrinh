#include<stdio.h>
int t=0;
void tinhtoan(int n,int k)
{
	if(n<=k) t+=1;
	else
	{
		t+=1;
		tinhtoan(n-k,k);
	}
}
int main()
{
	int n,k;
	printf("Nhap so banh can nuong n: "); scanf("%d",&n);
	printf("Nhap so banh nuong cung luc k: "); scanf("%d",&k);
	tinhtoan(n,k);
	printf("Thoi gian nuong het %d cai banh: %d phut",n,t*10);
	return 0;
}
