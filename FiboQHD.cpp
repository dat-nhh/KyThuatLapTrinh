//Fibonacci Qui hoach dong
#include<stdio.h>

int n;
int fibo[20];

void tinh(int n)
{
	fibo[1]=1; fibo[2]=1;	//	bai toan co so
	for(int i=3;i<=n;i++)
		fibo[i]=fibo[i-1]+fibo[i-2];	//	table
}

int main()
{
	n=5;
	tinh(n);
	printf("\n Fibo %d = %d",n,fibo[n]);
	return 0;
}
