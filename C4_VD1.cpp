//vi du: tim 1 bo gom n thanh phan co tong bang P
//n, p cho truoc
//moi thanh phan E {0;9}
#include<stdio.h>
int x[20];
int n;
int p;

void ktra_ng()
{
	int s=0;
	for(int k=1;k<=n;k++)
		s=s+x[k];
	if(s==p)
	{
		printf("\n");
		for(int k=1;k<=n;k++)
			printf("x[%d]=%d ",k,x[k]);
	}
}

//Thu xac dinh gia tri xi
void thu(int i)
{
	int j;
	for(j=0;j<=9;j++)	// Duyet mien tri cua xi
	{
		x[i]=j;	// ghi nhan gia tri cho xi
		if(i<n) thu(i+1);	// Neu chua du cac tp thi xet tiep
		else
			ktra_ng();
		x[i]=0;	// tra ve gia tri ban dau cua xi (back-tracking)
	}
}

int main()
{
	n=2;
	p=4;
	thu(1);
	return 0;
}
