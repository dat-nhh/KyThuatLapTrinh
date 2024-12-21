//Lay cac vat tu n bo vao balo sao cho gia tri dat duoc la lon nhat (1 vat co gia tri va the tich) - thu sai
#include<stdio.h>
int v=50;
int gt[]={5,1,7,4,3,8,4,1};
int tt[]={40,50,30,20,10,40,30,20};
int n=sizeof(gt)/sizeof(gt[0])-1;	//	chi so phan tu cuoi cung

int st[50];	//	trang thai cac vat, vd: st[i]=1 : vat i duoc bo vao trong balo
int gtmax=0;	// gia tri lon nhat cac vat bo vao balo
int stl[50];	//	trang thai cac vat co gia tri balo lon nhat

void kt()
{
	int vt=0;	//	tong so the tich cac vat thu bo vao balo
	int gtt=0;	//	tong gia tri cac vat thu bo vao balo
	for(int k=0;k<=n;k++)
		if(st[k]==1)
		{
			vt+=tt[k];
			gtt+=gt[k];
		}
	if(vt<=v)
		if(gtt>gtmax)
		{
			gtmax=gtt;
			for(int k=0;k<=n;k++)	//	ghi nhan lai trang thai thu thanh cong
			{
				if(st[k]==1) stl[k]=st[k];
				else stl[k]=0;
			}
		}
}

void thu(int i)
{
	for(int j=0;j<=1;j++)
	{
		st[i]=j;
		if(i<n) thu(i+1);
		else
			kt();
		st[i]=0;
	}
}

int main()
{
	thu(0);
	printf("Gia tri lon nhat cua balo %d \n",gtmax);
	printf("Cac vat duoc chon:\n");
	for(int k=0;k<=n;k++)	
				if(stl[k]==1) printf("\n Gia tri vat: %d, The tich cua vat: %d\n",gt[k],tt[k]);
	return 0;
}
