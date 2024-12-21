#include<stdio.h>

int n;
int a[50];
int b[50];
FILE *f;

void docfile()
{
	f=fopen("ip2.inp","r");
	if(f==NULL) printf("not found");
	else
	{
		fscanf(f,"%d",&n);
		for(int i=1;i<=n;i++)
			fscanf(f,"%d",&a[i]);
		fclose(f);
	}
}

int ktra(int a[],int x)
{
	int t=0;
	for(int i=x-1;i>=0;i--)
	{
		if(a[x]>a[i]) t+=1;
	}
	return t;
}

int dem(int a[],int n)
{
	for(int i=n;i>0;i--)
	{
		b[i]=ktra(a,i);
	}
	int max=b[n];
	for(int i=n-1;i>0;i--)
	{
		if(b[i]>max) max=b[i];
	}
	return max;
}
/*
void in(int a[],int n)
{
	int max=a[n];
	for(int i=n;i>0;i--)
	{
		if(a[i]<=max)
		{
			printf("%3d",a[i]);
			max=a[i];
		}
	}
}
*/
int main()
{
	docfile();
	printf("%d\n",dem(a,n));
	//in(b,n);
	return 0;
}
