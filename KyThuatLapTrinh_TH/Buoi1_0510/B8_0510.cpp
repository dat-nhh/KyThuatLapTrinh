#include<stdio.h>
int t=0;
void lamtron(float n)
{
	int a=n*10;
	if(a%10>=5) n=a/10+1;
	else n=a/10;
}
void muabo(float n,int k)
{
	if(n>=k)
	{
		printf("Tien co duoc sau %d nam la %f",t,n);
	}
	else
	{
		n+=(n/100)*10;
		lamtron(n);
		t+=1;
		muabo(n,k);
	}
}
int main()
{
	float n;
	int k;
	printf("Nhap so tien ban dau: "); scanf("%f",&n);
	printf("Nhap gia bo: "); scanf("%d",&k);
	muabo(n,k);
	printf("\nVay mat %d nam de mua duoc bo",t);
	return 0;
}
