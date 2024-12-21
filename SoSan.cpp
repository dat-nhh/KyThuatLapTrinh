#include<stdio.h>
int a[]={10,20,30,35,40,45,50,60};
int n=sizeof(a)/sizeof(a[0])-1;
int x=38;

int sosan(int a[], int l, int r, int x)
{
	if(a[r]<=x) return a[r];
	if(a[l]>x) return -1;
	else
	{
		int m=(l+r)/2;
		if(a[m]==x) return a[m];
		else
		{
			if(a[m]<x && a[m+1]>x) return a[m];
			else
			{
				if(a[m]>x) return sosan(a,l,m-1,x);
				else return sosan(a,m+1,r,x);
			}
		}
	}
}
int main()
{
	printf("\n Phan tu san: %d",sosan(a,0,n,x));
	return 0;
}
