#include<stdio.h>
int mt[][8]=
{
	0,0,0,0,0,0,0,0,
	0,1,0,0,1,0,0,0,
	0,0,0,1,1,1,0,0,
	0,0,0,0,1,1,1,0,
	0,0,1,1,0,0,1,0,
	0,0,1,1,0,0,0,0,
	0,1,0,1,0,0,1,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0
};

int k=1;	//	so thu tu mien lien thong
void thu(int i,int j,int k)
{
	if(mt[i][j]==1)
	{
		mt[i][j]=k;
		thu(i-1,j,k);
		thu(i+1,j,k);
		thu(i,j-1,k);
		thu(i,j+1,k);
	}
}
int main()
{
	int sh=7;
	int sc=6;
	for(int x=1;x<=sc;x++)
	{
		for(int y=1;y<=sh;y++)
		{
			if(mt[x][y]==1)
			{
				k+=1;
				thu(x,y,k);
			}
		}
	}
	for(int x=1;x<=sh;x++)
	{
		for(int y=1;y<=sc;y++)
			printf("%2d",mt[x][y]);
			printf("\n");
	}
	return 0;
}
