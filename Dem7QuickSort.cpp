#include<stdio.h>
int a[]={5,3,7,8,4,7,6,7,9,7,2,4};
int n=sizeof(a)/sizeof(a[0]);

int dem7(int a[], int l, int r)
{
	if(r<l) return 0;
	else
	if(l==r)
	{
		if(a[l]==7) return 1;
		else return 0;
	}
	else
	{
		int m=(l+r)/2;
		if(a[m]==7)
			return 1+dem7(a,l,m-1)+dem7(a,m+1,r);
		else
			return dem7(a,l,m-1)+dem7(a,m+1,r);
	}
}
int main()
{
	printf("\n So luong so 7: %d\n",dem7(a,0,n-1));
	return 0;
}
