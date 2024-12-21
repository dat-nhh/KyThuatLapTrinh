//chia de tri tim kiem
#include<stdio.h>
int a[]={2,5,7,9,10,13};
int n=sizeof(a)/sizeof(a[0]);
int x;

int tim(int a[],int l,int r,int x)
{
	if(r<l) return -1;
	else
	{
		int m=(l+r)/2;
		if(a[m]==x) return m;
		else
		{
			if(a[m]>x) return tim(a,l,m-1,x);
			else
				return tim(a,m+1,r,x);
		}
	}
}

int main()
{
	x=7;
	printf("%d",tim(a,1,n-1,x));
	return 0;
}
