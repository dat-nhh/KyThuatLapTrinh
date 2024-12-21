//b2.10: khoang cach trai phai
#include<stdio.h>
#include<math.h>
int n;
int s=0;
int a[50];
FILE *f;

void doc()
{
	f=fopen("b2c10.int","r");
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
	f=fopen("b2c10.out","w");
	if(f==NULL) printf("not found");
	else
		fprintf(f,"%d",s);
	fclose(f);
}

void tinh()
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==1) s++;
		else s--;
	}
	s=abs(s);
}

int main()
{
	doc();
	tinh();
	ghi();
	return 0;
}
