//Phan tu thu n cua day fibonacci
//De qui
#include<stdio.h>

int n;

int fibo(int n)
{
	if(n<=2) return 1;
	else
		return fibo(n-1)+fibo(n-2);
}

int main()
{
	n=5;
	printf("\n Fibo %d = %d",n,fibo(n));
	return 0;
}
