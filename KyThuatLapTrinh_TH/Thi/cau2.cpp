#include<stdio.h>
int n;
int k;
int a[50];
FILE *f;

void doc()
{
	f=fopen("cau2.int","r");
	if(f==NULL) printf("not found");
	else
	{
		fscanf(f,"%d",&n);
		fscanf(f,"%d",&k);
		for(int i=0;i<n;i++)
			fscanf(f,"%d",&a[i]);
		fclose(f);
	}
}

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

int vatsua(int a[], int n, int k)
{
	int s=0; 
	int t=0; 
	for(int i=0;i<n;i++)
	{
		if(a[i]-t>=0)
		{
			s=s+a[i]-t;
			t+=k;
		}
	}
	return s;
}

void ghi()
{
	f=fopen("cau2.out","w");
	if(f==NULL) printf("not found");
	else
	{
		fprintf(f,"%d",vatsua(a,n,k));
		fclose(f);
	}
}

int main()
{
	doc();
	sapxep(a,n);
	ghi();
	return 0;
}
