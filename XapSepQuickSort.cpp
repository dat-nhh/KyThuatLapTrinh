#include<stdio.h>

int a[]={10,30,15,12,45,32,18};
int n=sizeof(a)/sizeof(a[0]);

void quicksort(int a[],int l, int r)
{
	int i,j,m;
	int tam,key;	//	key: gia tri phan tu lam chuan
	if(l<r)	//	day co tu 2 phan tu tro len
	{
		m=(l+r)/2;	//	vi tri phan tu giua day
		key=a[m];
		i=l;j=r;
		while(i<j)
		{
			while(a[i]<key) i=i+1;
			while(a[j]>key) j=j-1;
			if(i<=j)
			{
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;
				i=i+1;
				j=j-1;
			}
			if(j>l) quicksort(a,l,j);
			if(i<r) quicksort(a,i,r);
		}
	}
}
int main()
{
	quicksort(a,0,n-1);
	for(int k=0;k<n;k++)
	{
		printf("%3d",a[k]);
	}
	return 0;
}
