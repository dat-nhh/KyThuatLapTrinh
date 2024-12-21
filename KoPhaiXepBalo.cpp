#include<stdio.h>
//tim cac day con co tong = p
int a[]={50,10,30,70,40,20,80,50};
int n=sizeof(a)/sizeof(a[0])-1;

int p=160;
int b[50];	//	trang thai chon (b[i]=1 la duoc chon)
int tong=0;	//	tong cac phan tu duoc chon
void kt()
{
	int s=0;
	for(int k=0;k<=n;k++)
		if(b[k]==1) s=s+a[k];
	if(s==p)
	{
		printf("\n----------------\n");
		for(int k=0;k<=n;k++)
			if(b[k]==1) printf("%3d",a[k]);
	}
}
void thu(int i)
{
	for(int j=0;j<=1;j++)
	{
		b[i]=j;
		if(b[i]==1) tong=tong+a[i];
		if((i<n)&&(tong<p)) thu(i+1);	//	nhanh can
		else kt();
		if(b[i]==1) tong=tong-a[i];
		b[i]=0;
	}
}
int main()
{
	thu(0);
	return 0;
}
