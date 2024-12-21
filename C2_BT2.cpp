#include<stdio.h>
int f(int n)
{
	if(n==0) return 0;
		else if(n==1) return 1;
				else{
				int val=4*f(n-1);
				val=val-3*f(n-2);
				val+=2;
	return val;	}
}
int main()
{
	int x;
	printf("x= ");
	scanf("%d",&x);
	printf("Final= %d",f(x));
	return 0;
}

/////////////////////////////////////////////

/*  f(2)=6
	f(3)=23 */
