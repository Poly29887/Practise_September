#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int i,e,num[1000],min,max=0;
	printf("Input the number of elements to be stored in the array : ");
	scanf("%d", &e);
	printf("Input %d elements in the array\n",e);
	for (i = 0; i < e; i++)
	{
		printf("element-%d : ", i + 1);
		scanf("%d",&num[i]);
	}
	min = num[0];
	for (i = 0; i < e; i++)
	{
		if (min > num[i])
		{
			min = num[i];
		}
		if (max < num[i])
		{
			max = num[i];
		}
	}
	printf("Maximum element is : %d\n",max);
	printf("Minimum element is : %d",min);
}