#include<stdio.h>

int n;
int a[50];
FILE *f;

void doc()
{
	f=fopen("cau4.int","r");
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
	int maxhieu=-1;
	int min=a[n];
	for(int i=n-1;i>=0;i--)
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

void ghi()
{
	f=fopen("cau4.out","w");
	if(f==NULL) printf("not found");
	else
	{
		fprintf(f,"%d",hieu(a,n-1));
		fclose(f);
	}
}

int main()
{
	doc();
	ghi();
	return 0;
}
