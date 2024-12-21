//b1.4: kiem tra so nguyen to
#include<stdio.h>

int n;

int ktnt(int n)
{
	
	for(int i=2;i<n;i++)
		if(n%i==0) return 0;
	return 1;
}

int main()
{
	scanf("%d",&n); //nhap n
	//in ket qua:
	// 0: khong la snt
	// 1: la snt
	if(n<2) printf("0");
	else
		printf("%d",ktnt(n));	
	return 0;
}
