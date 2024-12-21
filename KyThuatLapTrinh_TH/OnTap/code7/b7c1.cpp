//hieu so HISO
#include<stdio.h>

int n=3;
int a[]={1,2,3};

int hieu(int a[], int n)
{
	int maxhieu=0;
	int min=a[0];
	for(int i=1;i<n;i++)
	{
		if(min<=a[i])
		{
			int temp=a[i]-min;
			if(temp>maxhieu) maxhieu=temp;
		}
		else min=a[i];
	}
	return maxhieu;
	
}

int main()
{
	printf("%d",hieu(a,n));
	return 0;
}
