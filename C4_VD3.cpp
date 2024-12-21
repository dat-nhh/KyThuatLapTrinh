//VD3: (domino) tong nua tren bang tong nua duoi
#include<stdio.h>

int nt[]={3,2,1,4};
int nd[]={5,4,2,5};
int sl=sizeof(nt)/sizeof(nt[0]);
int n=sl-1;
int x[50];

void ktra()
{
	int tt=0;
	int td=0;
	for(int k=0;k<=n;k++)
	{
		if(x[k]==0)
		{
			tt=tt+nt[k];
			td=td+nd[k];
		}
		else 
		{
			tt=tt+nd[k];
			td=td+nt[k];
		}
	}
	if(tt==td)
	{
		printf("\n =========================\n");
		printf("\n Nua tren: \n");
		for(int k=0;k<=n;k++) 
			if(x[k]==0)
				printf("%3d",nt[k]);
			else
				printf("%3d",nd[k]);
		printf("\n Nua duoi: \n");
		for(int k=0;k<=n;k++) 
			if(x[k]==0)
				printf("%3d",nd[k]);
			else
				printf("%3d",nt[k]);
	}
}

int thu(int i)
{
	int j;
	for(j=0;j<=1;j++)
	{
		x[i]=j;
		if(i<n) thu(i+1);
		else 
			ktra();
		x[i]=0;
	}
}

int main()
{
	thu(0);
	return 0;
}
