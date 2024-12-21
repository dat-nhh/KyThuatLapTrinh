//chia de tri dem so
#include<stdio.h>
int a[]={2,0,1,13,0,12,20,13,0,9};
int n=sizeof(a)/sizeof(a[0]);
int x;

int dem(int a[], int l, int r, int x)
{
	if(r<l) return 0;
	else
	if(l==r)
	{
		if(a[l]==x) return 1;
		else return 0;
	}
	else
	{
		int m=(l+r)/2;
		if(a[m]==x)
			return 1+dem(a,l,m-1,x)+dem(a,m+1,r,x);
		else
			return dem(a,l,m-1,x)+dem(a,m+1,r,x);
	}
}

int main()
{
	x=0;
	printf("%d",dem(a,0,n-1,x));
	return 0;
}
