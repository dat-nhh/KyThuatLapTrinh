//day con tang dai nhat DACO
#include<stdio.h>

int n=9;
int a[]={0,1,2,3,4,9,10,5,6,7}; // 0 la phan tu linh canh
int b[50];

int ktra(int a[],int x)
{
	int t=0;
	for(int i=x-1;i>=0;i--)
	{
		if(a[x]>a[i]) t+=1;
	}
	return t;
}

int dem(int a[],int n)
{
	for(int i=n;i>0;i--)
	{
		b[i]=ktra(a,i);
	}
	int max=b[n];
	for(int i=n-1;i>0;i--)
	{
		if(b[i]>max) max=b[i];
	}
	return max;
}

int main()
{
	printf("%d",dem(a,n+1));
	return 0;
}
