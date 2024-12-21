//xep gach tham lam TILE
#include<stdio.h>
int n=4;
int a[]={1,2,1,1};
int b[50];

void sapxep(int a[], int n)
{
	int tam;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	}
}

int xepgach(int a[], int n)
{
	b[0]=a[0];
	int s=1;
	for(int i=1;i<n;i++)
	{
		b[i]=a[i];
		s++;
		for(int j=0;j<i;j++)
		{
			b[j]--;
			if(b[j]<=0) return s;
		}
	}
}

int main()
{
	sapxep(a,n);
	//for(int i=0;i<n;i++) printf("%3d",a[i]);
	printf("%d",xepgach(a,n));
	return 0;
}
