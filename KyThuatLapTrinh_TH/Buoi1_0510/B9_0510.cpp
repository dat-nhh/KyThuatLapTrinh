#include<stdio.h>
int t=0;
int ktnt(int n)
{
	for(int i=2;i<n;i++)
		if(n%i==0) return 1;
	return 0;
}
int rn(int n)
{ 
  int r=0; 
  while(n>0) 
  {
    r=r*10+n%10;
    n/=10;
  }
  return r;
}
int ktds(int n)
{ 
  int f=0;
  if(rn(n)==n) f=1;
  return f;
}
int main()
{
	int a,b;
	printf("Nhap 2 so nguyen duong A va B\n");
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++)
	{
		if(ktnt(i)==0)
		{
			if(ktds(i)==1) t++;
		}
	}
	printf("Co %d bien so xe dep",t);
	return 0;
}
