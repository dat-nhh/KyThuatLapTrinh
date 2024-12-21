#include<stdio.h>

int n;
int a[50];
FILE *f;

void doc()
{
	f=fopen("ip1.inp","r");
	if(f==NULL) printf("not found");
	else
	{
		fscanf(f,"%d",&n);
		for(int i=0;i<n;i++)
			fscanf(f,"%d",&a[i]);
		fclose(f);
	}
}

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
	doc();
	printf("%d",hieu(a,n));
	return 0;
}
