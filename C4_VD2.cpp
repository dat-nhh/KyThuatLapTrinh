//VD2: co n qua can co khoi luong{...}. Chi ra cach bo tri can len 2 dia can de can thang bang 
#include<stdio.h>

int p[]={0,7,2,4,1,1,5};	// khoi luong cac qua can
int n=sizeof(p)/sizeof(p[0])-1;	// n la chi so cua qua can cuoi cung

int x[20];

void ktra_ng()
{
	int st=0;	// tong khoi luong dia trai
	int sp=0;	// tong khoi luong dia phai
	for(int k=1;k<=n;k++)
	{
		if(x[k]==-1) st=st+p[k];
		else
			if(x[k]==1) sp=sp+p[k];
	}
	if((st==sp)&&(st!=0))
	{
		printf("\n =========================\n");
		printf("\n Dia trai: \n");
		for(int k=1;k<=n;k++)
			if(x[k]==-1) printf("%3d",p[k]);
		printf("\n Dia phai: \n");
		for(int k=1;k<=n;k++)
			if(x[k]==1) printf("%3d",p[k]);
	}
}

void thu(int i)
{
	int j;
	for(j=-1;j<=1;j++)	// duyet trang thai thanh phan thu i
	{
		x[i]=j;	// ghi nhan trang thai cua qua can thu i
		if(i<n) thu(i+1);
		else
			ktra_ng();
		x[i]=0;
	}
}

int main()
{
	thu(1);
	return 0;
}
