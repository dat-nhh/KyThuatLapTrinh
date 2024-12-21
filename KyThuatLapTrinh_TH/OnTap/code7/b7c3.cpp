//dayso
#include<stdio.h>
int n=7;
int a[]={0,3,1, 9, 8, 5, 1, 7}; //0 la phan tu linh canh
//       0,3,1,12,11,17,13,24
int b[50];

void tinh(int a[], int n)
{
	b[0]=a[0];
	b[1]=a[1];
	b[2]=a[0]+a[2];
	for(int i=3;i<n;i++)
	{
		int temp=0;
		for(int j=i-2;j>=0;j--)
		{
			b[i]=b[j]+a[i];
			if(b[i]<=temp) b[i]=temp;
			temp=b[i];
		}
	}
}

int max(int b[],int n)
{
	int max=0;
	for(int i=1;i<=n;i++)
		if(b[i]>=max) max=b[i];
	return max;
}

int main()
{
	tinh(a,n+1);
	printf("%d",max(b,n+1));
	return 0;
}
