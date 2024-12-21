//In day nhi phan do dai n
#include<stdio.h>
int n;
int a[50];

void in(int a[])
{
	for(int j=1;j<=n;j++)
		printf("%d",a[j]);
	printf("\n");
}

void deQuy(int i)
{
    for(int j=0;j<=1;j++)
	{
        a[i]=j;
        if(i==n) in(a);
        else
            deQuy(i+1);
	}
}

int main()
{
	scanf("%d",&n);
	deQuy(1);
	return 0;
}
