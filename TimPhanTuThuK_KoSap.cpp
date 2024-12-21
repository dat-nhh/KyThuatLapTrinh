#include<stdio.h>
int a[]={20,75,42,10,13};
int n=sizeof(a)/sizeof(a[0]);
int k;

int chiadoi(int a[], int l, int r)
{
	int i,j,m,tam;
	int key;
	if(l<r)
	{
		m=(l+r)/2;
		key=a[m];
		i=l; j=r;
		while(i<j)
		{
			while(a[i]<key) i=i+1;
			while(a[j]>key) j=j-1;
			if(i<j)
			{
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
				i=i+1;
				j=j-1;
		}
		return i;
	}
}

int ptbethuk(int a[], int l, int r, int k)
{
	int pos;	//	vi tri phan thu nho thu k
	if(k>0 && k<=r-l+1)
	{
		pos=chiadoi(a,l,r);
		if(pos-l==k-1)
			return a[pos];
		else
		{
			if(pos-l>k-1) return ptbethuk(a,l,pos-1,k);
			else return ptbethuk(a,pos+1,r,k-pos+l-1);
		}
	}
	else return -10000000;
}
int main()
{
	k=3;
	printf("\n Phan tu nho thu: %d\n",k);
	printf("\n Co gia tri: %d",ptbethuk(a,0,n-1,k));
	return 0;
}
