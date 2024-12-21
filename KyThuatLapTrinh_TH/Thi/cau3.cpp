#include<stdio.h>

int n;
int a[50];
int b[50];
FILE *f;

void doc()
{
	f=fopen("cau3.int","r");
	if(f==NULL) printf("not found");
	else
	{
		fscanf(f,"%d",&n);
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

void ttnt(int a[],int b[], int n, int i)
{
	if(ktnt(a[i])==1) b[i]=1;
	else b[i]=0;
	if(i<n) ttnt(a,b,n,i+1);
}

void ghi()
{
	f=fopen("cau3.out","w");
	if(f==NULL) printf("not found");
	else
	{
		for(int i=0;i<n;i++)
			if(b[i]==1) fprintf(f,"%d ",a[i]);	
		fclose(f);
	}
}

int main()
{
	doc();
	ttnt(a,b,n,0);
	ghi();
	return 0;
}
