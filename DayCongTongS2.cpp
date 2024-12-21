#include<stdio.h>
#include<conio.h>

int a[]={2,3,4,5,1,8,7};
int n=sizeof(a)/sizeof(a[0]);

int P[100][100];//P[i][j]=1 neu co cac goi keo tu 1 den i co tong bang j
int S=10;

int main()
{
	int i,j;
	//xu ly
	for (i=0;i<100;i++)
	{
		P[i][0]=1;
		P[0][i]=0;
	}
	P[0][0]=1;
	for (i=1;i<=n;i++)
		for(j=1;j<=S;j++)
			if ((P[i-1][j]==1) || (P[i-1][j-a[i]]==1))
				P[i][j]=1;
	//In ra xau con co tong bang = S
	if (P[n][S]==1)
		printf("\n co day con! \n");
	//In ra cac day con
	for (i=n;i>0;i--)
		if ((P[i][S]==1)&&(P[i-1][S]==0))
		{
			printf("%3d",a[i]);
			S=S-a[i];
		}			
	getch();
	return 0;		
}

