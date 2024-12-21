//Tam giac pascal
#include<stdio.h>
int n,k;
int tg[20][20];

void tinh(int n)
{
	for(int i=0;i<=n;i++)
	{
		tg[i][0]=1;	// cot 0 hang i
		tg[i][i]=1;	// duong cheo chinh
		for(int i=2;i<=n;i++)
		{
			for(int j=1;j<i;j++)
				tg[i][j] = tg[i-1][j]+tg[i-1][j-1];
		}
	}
}

int main()
{
	n=5; k=3;
	tinh(5);
	printf("\n To hop chap %d cua %d la %d",k,n,tg[n][k]);
}
