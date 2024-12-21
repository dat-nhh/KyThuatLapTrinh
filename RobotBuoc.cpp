// robot di 1 buoc(1m hoac 2m).In tung buoc di n met.
#include<stdio.h>

int a[50]; //	Vet di cua robot
int n=5; //	Chieu dai doan duong

void kt_ng()
{
	int s=0;
	int k=1;
	while(a[k]>0)
	{
		s+=a[k];
		k+=1;
	}
	if(s==n)
	{
		printf("\n");
		for(int t=1;t<k;t++)
			printf("%2d",a[t]);
	}
}

void thu(int i, int dai)	//	thu xet buoc di cua robot, chieu dai doan duong can di la dai
{
	for(int j=1;j<=2;j++)
	{
		a[i]=j;	//	Buoc di thu i cua robot la j met
		if(dai-a[i]>0) thu(i+1,dai-j);
		else
			kt_ng();
		a[i]=0;
	}
}

int main()
{
	thu(1,n);
	return 0;
}
