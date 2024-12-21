//vat sua bo tham lam VASU
#include<stdio.h>
int n=4;
int a[]={2,1,4,3};

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

int vatsua(int a[], int n)
{
	int s=0; //tong luong sua
	int t=0; //sua bi tru
	for(int i=0;i<n;i++)
	{
		s=s+a[i]-t;
		t++;
	}
	return s;
}

int main()
{
	sapxep(a,n);
	printf("%d",vatsua(a,n));
	return 0;
}
