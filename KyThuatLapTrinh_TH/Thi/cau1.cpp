#include<stdio.h>
int n;
int k;
int a[50];
FILE *f;

void doc()
{
	f=fopen("cau1.int","r");
	if(f==NULL) printf("not found");
	else
	{
		fscanf(f,"%d",&n);
		fscanf(f,"%d",&k);
		for(int i=0;i<n;i++)
			fscanf(f,"%d",&a[i]);
		fclose(f);
	}
}

int ktnt(int n)
{
	if(n<2) return 0;
	{
		for(int i=2;i<n;i++)
			if(n%i==0) return 0;
		return 1;
	}
}

int dem(int a[], int l, int r, int k)
{
	if(r<l) return 0;
	else
	{
			if(l==r)
		{
			if(a[l]>k && ktnt(a[l])==1) return 1;
			else return 0;
		}
		else
		{
			int m=(l+r)/2;
			if(a[m]>k && ktnt(a[m])==1)
				return 1+dem(a,l,m-1,k)+dem(a,m+1,r,k);
			else
				return dem(a,l,m-1,k)+dem(a,m+1,r,k);
		}
	}
}

void ghi()
{
	f=fopen("cau1.out","w");
	if(f==NULL) printf("not found");
	else
	{
		fprintf(f,"%d",dem(a,0,n-1,k));
		fclose(f);
	}
}

int main()
{
	doc();
	ghi();
	return 0;
}
