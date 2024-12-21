#include<stdio.h>
#include<math.h>
int s=0;
void tinh(int n, int i)
{
	int x;
	printf("Lan thu %d: ",i);
	scanf("%d",&x);
	if(x==1) s+=1;
	if(x==2) s-=1;
	if(i<n) tinh(n,i+1);
}
int main()
{
	int n;
	printf("Nhap so buoc n: ");
	scanf("%d",&n);
	printf("Bat dau\n");
	printf("Trai=1 & Phai=2\n");
	tinh(n,1);
	printf("Ket qua: %d",abs(s));
	return 0;
}
