#include<stdio.h>
int f(int n)
{
	if(n==0) return 0;
		else if(n==1) return 1;
				else return 4*f(n-1)-3*f(n-2)+2;	
}
int main()
{
	int x;
	printf("x= ");
	scanf("%d",&x);
	printf("Final= %d",f(x));
	return 0;
}
