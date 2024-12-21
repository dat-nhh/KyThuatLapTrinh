#include<stdio.h>
#include<conio.h>
int x;
void Them2bot1(int &x, int y)
{	
	printf("\n %3d %3d",x,y);
	x=x+2;
	if(y>0)
	{
		y=y-1;
		Them2bot1(x,y);
	}
	printf("\n %3d %3d",x,y);
}
int main()
{
	x=5;
	Them2bot1(x,x);
	getch();
	return 0;
}
