//to hop mang 1 chieu
#include<stdio.h>

int a[20];
int k,n;

void tg(int n,int k)
{
	a[0]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=k;j>0;j--)
			a[j]=a[j]+a[j-1];
	}
}

int main()
{
	n=5;
	k=3;
	tg(n,k);
	printf("\n To hop chap %d cua %d la %d",k,n,a[k]);
	return 0;
}
