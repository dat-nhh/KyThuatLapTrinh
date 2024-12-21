#include<stdio.h>
float s=0;
float tinh(float i, float n)
{
	s+=1/i;
	if(i<n) tinh(i+1,n);
	else return s;
}
int main()
{
	float n;
	printf("Nhap n: "); scanf("%f",&n);
	printf("Ket qua: %.3f",tinh(1,n));
	return 0;
}
