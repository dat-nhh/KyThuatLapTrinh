#include<stdio.h>

int V=55;
int vs[]={1,3,5,3,7,15,17,20,32,16,34,13,10,1};
int n=sizeof(vs)/sizeof(vs[0]);
int b[40];	//	Luu tru soi bo binh

void sapxep(int vs[], int n)
{
	int tam;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(vs[i]<vs[j])
			{
				tam=vs[i];
				vs[i]=vs[j];
				vs[j]=tam;
			}
		}
	}
}
void chonsoi(int vs[], int n, int V)
{
	int S=0;
	int i=0;
	int k=0;
	while(S<V && i<n)
	{
		if(S+vs[i]<V)
		{
			b[k]=vs[i];
			S=S+b[k];
			k=k+1;
		}
		i=i+1;
	}
}
int main()
{
	sapxep(vs,n);
	chonsoi(vs,n,V);
	int i=0;
	while(b[i]!=0)
	{
		printf("\n %3d",b[i]);
		i=i+1;
	}
	return 0;
}
