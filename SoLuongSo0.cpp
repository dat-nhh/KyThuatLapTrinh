#include<stdio.h>
int a[]={1,1,1,0,0,0,0,0,0};
int n=sizeof(a)/sizeof(a[0]);

// Tim vi tri so 0 dau tien
int pos(int a[], int l, int r)
{
	if(l>r) return -1;	//	ko co so khong
	else
	{
		if(a[l]==0) return l;
		if(a[r]==1) return -1;
		else
		{
			int m=(l+r)/2;
			if(a[m]==0 && a[m-1]==1) return m;
			else
			{
				if(a[m]==0 && a[m-1]==0) return pos(a,l,m-1);
				if(a[m]==1) return pos(a,m+1,r);
			}
		}
	}
}
int dem0(int a[], int l, int r)
{
	if(pos(a,l,r)==-1) return 0;
	else return r-pos(a,l,r)+1;
}
int main()
{
	printf("\n So luong so 0: %d",dem0(a,0,n-1));
	return 0;
}
