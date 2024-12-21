#include<stdio.h>
int m,n,i;
int c=0;
int b=0;
void inhang(int a[][100],int i, int n)
{
	for(int j=0;j<n;j++)
		printf("%3d",a[i][j]);
}
void in(int a[][100],int m, int n)
{
	printf("Ma tran:\n");
	for(i=0;i<m;i++)
	{
		inhang(a,i,n);
		printf("\n");
	}
}
void nhap(int a[][100],int m, int n)
{
	for(i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void ktra(int a[][100],int m, int n)
{
	for(i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==a[0][0]);
			else
				if(a[i][j]<=a[i][j-1])
				{
					c=i;
					b=j;
				}
		}
		ktra2(a,m,n);
	}
}
void ktra2(int a[][100],int m, int n)
{
	for(i=0;i<m;i++)
		if(a[c][i]>a[c][i])
}
int main()
{
	int a[100][100];
	printf("Nhap chieu dai n: "); scanf("%d",&n);
	printf("Nhap chieu cao m: "); scanf("%d",&m);
	nhap(a,m,n);
	in(a,m,n);
	ktra(a,m,n);
	return 0;
}
