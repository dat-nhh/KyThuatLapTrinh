#include<stdio.h>
int n;
int a[50];
FILE *f;

void doc()
{
	f=fopen("input.int","r");
	if(f==NULL) printf("not found");
	else
	{
		fscanf(f,"%d",&n);
		for(int i=0;i<n;i++)
			fscanf(f,"%d",&a[i]);
		fclose(f);
	}
}

void ghi()
{
	f=fopen("output.out","w");
	if(f==NULL) printf("not found");
	else
	{
		for(int i=0;i<n;i++)
			fprintf(f,"%d ",a[i]);
		fputs("\n",f);
		for(int i=0;i<n;i++)
		{
			if(a[i]%2==0) fputs("T ",f);
			else fputs("F ",f);
		}	
		fclose(f);
	}
}

int main()
{
	doc();
	ghi();
	return 0;
}
