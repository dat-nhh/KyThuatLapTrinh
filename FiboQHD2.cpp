//Fibonacci Qui hoach dong
#include<stdio.h>

int n;
int a,b,c;

void tinh(int n)
{
	a=1; b=1;	//	bai toan co so
	if(n<=2) c=1;
	else
	{
		for(int i=3;i<=n;i++)
		{
			c=a+b;	//	bien nho
			a=b;
			b=c;
		}
	}
}

int main()
{
	n=5;
	tinh(n);
	printf("\n Fibo %d = %d",n,c);
	return 0;
}
