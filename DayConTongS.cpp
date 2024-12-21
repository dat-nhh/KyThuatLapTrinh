#include<stdio.h>

int a[]={8,4,5,6,1,9,4,3,7};
int s=12;
int n=sizeof(a)/sizeof(a[0]);
int tt[20];

void ktra()
{
	int tong=0;
	for(int k=0;k<n;k++)
		if(tt[k]==1) tong+=a[k];
	if(tong==s)
	{
		printf("\n");
		for(int k=0;k<n;k++)
			if(tt[k]==1) printf("%3d",a[k]);
	}
}

void thu(int i)
{
	for(int j=0;j<=1;j++)
	{
		tt[i]=j;
		if(i<n-1) thu(i+1);
		else
			ktra();
		tt[i]=0;
	}
}

int main()
{
	printf(" s=%d",s);
	thu(0);
	return 0;
}
