//house robber
#include<stdio.h>
//gia tri tai san cua day nha
int nums[]={2,1,7,8};
int n=sizeof(nums)/sizeof(nums[0]);
int max(int a, int b)
{
	if(a>b) return a;
	else return b;
}

//cach 1: de quy binh thuong
int vmax(int k)
{
	if(k<0) return 0;
	if(k==0) return nums[0];
	if(k==1) return max(nums[0],nums[1]);
	if(k>1) return max(vmax(k),vmax(k-2)+nums[k]);
}

int main()
{
	printf("\n So tien lon nhat: %d",vmax(n-1));
	return 0;
}
