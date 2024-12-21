//b1.5: kiem tra so hoan hao (la so bang tong cac uoc so)
#include<stdio.h>
int n;

int kthh(int n)
{
	int t=0;
	for(int i=1;i<n;i++)
		if(n%i==0) t+=i;
	return t;
}

int main()
{
	scanf("%d",&n); //nhap n
	if(kthh(n)==n) printf("1");
	else 
		printf("0");
	//0: khong hoan hao; 1:hoan hao
	return 0;
}
