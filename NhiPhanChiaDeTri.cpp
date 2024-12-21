#include<stdio.h>
int a[]={10,13,28,32,46,59,60,80,85,92};
int n=sizeof(a)/sizeof(a[0]);
int x;

int timnp(int a[],int l,int r,int x)
{
	if(r<l) return -1;
	else
	{
		int m=(l+r)/2;
		if(a[m]==x) return m;
		else
		{
			if(a[m]>x) return timnp(a,l,m-1,x);
			else
				return timnp(a,m+1,r,x);
		}
	}
}
int main()
{
	x=59;
	printf("\n Vi tri phan tu %d la %d\n",x,timnp(a,0,n-1,x));
	return 0;
}
