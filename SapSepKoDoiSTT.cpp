#include<stdio.h>

int a[]={17,10,03,25,02,30,01};
//  STT {00,01,02,03,04,05,06}
int n=sizeof(a)/sizeof(a[0]);
int cs[20];

int main()
{
	for(int i=0;i<n;i++)
		cs[i]=i;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[cs[i]]>a[cs[j]])
			{
				int tam=cs[i];
				cs[i]=cs[j];
				cs[j]=tam;
			}
		}
	}
	for(int j=0;j<n;j++)
		printf("\n Phan tu: %d, Gia tri: %d",cs[j],a[cs[j]]);
	return 0;
}
