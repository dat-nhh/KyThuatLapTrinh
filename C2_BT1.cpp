#include<stdio.h>
#include<conio.h>
int x;
void tanggiam(int &x, int y)
{
	printf("\n x=%3d, y=%3d",x,y);
	x+=1;
	if(y>0)
		{
			y-=1;
			tanggiam(x,y);
		}
	printf("\n x=%3d, y=%3d",x,y);
}
int main()
{
	x=3;
	tanggiam(x,x);
	printf("\n Cuoi cung x=%3d",x);
	return 0;
}
