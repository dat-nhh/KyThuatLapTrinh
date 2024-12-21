//Hanh trinh ky tu
#include<stdio.h>
#include<string.h>

char a[50];	//	xau ky tu
FILE *f;
char kt[50][50];	//	Luoi hien thi
int l;	//	chieu dai chuoi
int gh[]={0,1};
int gc[]={1,0};
void docfile()
{
	f=fopen("htkytu.inp","r");
	if(f==NULL) printf("\n Khong mo duoc file");
	else
	{
		fscanf(f,"%s",&a);
		printf("\n Xau can doc: %s\n",a);
		fclose(f);
	}
}
void luoi()
{
	l=strlen(a);
	for(int h=0;h<l;h++)
		for(int c=0;c<l-h;c++)
			kt[h][c]=a[h+c];
}
void inluoi()
{
	for(int h=0;h<l;h++)
	{
		for(int c=0;c<l-h;c++)
			printf("%c",kt[h][c]);
		printf("\n");
	}
}
void thu(int x,int y, int dai)
{
	for(int j=0;j<=1;j++)
	{
		x=x+gh[j];
		y=y+gc[j];
		char tam=kt[x][y];
		kt[x][y]='*';
		dai=dai-1;
		if(dai>1) thu(x,y,dai);
		else inluoi();
		dai=dai+1;
		kt[x][y]=tam;
		x=x-gh[j];
		y=y-gc[j];
	}
}
int main()
{
	docfile();
	luoi();
	inluoi();
	kt[0][0]='*';
	thu(0,0,l);
	return 0;
}
