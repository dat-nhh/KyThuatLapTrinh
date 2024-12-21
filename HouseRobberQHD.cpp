//House Robber
#include<stdio.h>

int nums[]={2,1,7,8};
int n = sizeof(nums)/sizeof(nums[0]);
int luu[30];//luu cac ket qua trung gian

int max(int a, int b)
{
	if (a>b) return a;
	else
		return b;
}

//Cach 1: De qui binh thuong
int vmax(int k)
{
	if (k<0)
		return 0;
	if (k==0)
		return nums[0];	
	if (k==1)
		return max(nums[0],nums[1]);
	if (k>1) return max(vmax(k-1),vmax(k-2)+nums[k]);	
}

//Qui hoach dong
void qhd(int k)
{
	luu[0]=nums[0];
	luu[1]=max(nums[0],nums[1]);
	for (int i=2; i<k;i++)
		luu[i]=max(luu[i-1],luu[i-2]+nums[i]);
}

int main()
{
	printf("So tien lon nhat lay duoc : %d",vmax(n-1));
	qhd(n);
	printf("\nSo tien lon nhat lay duoc: %d",luu[n-1]);
	return 0;
}

