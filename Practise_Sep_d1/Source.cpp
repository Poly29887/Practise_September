#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num[1000],R_num[1000],j=0,i,n;
	printf("Input the number of elements to store in the array : "); 
	scanf("%d",&n);
	printf("Input %d number of elements in the array \n",n); 
	for (i=0;i<n;i++)
	{
		printf("element - %d : ",i);
		scanf("%d", &num[i]);
	}
	printf("The values store into the array are :\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", num[i]);
	}
	for (i = n-1; i >= 0 ; i--)
	{	
		R_num[j] = num[i];
		j++;
	}
	printf("\n");
	printf("The values store into the array in reverse are :\n");
	for (j = 0; j < n; j++)
	{
		printf("%d ", R_num[j]);
	}
}