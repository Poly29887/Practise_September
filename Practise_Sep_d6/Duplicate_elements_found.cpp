#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num[1000], check[1000], n, i, j, count = 0, ch = 0;;
	printf("Input the number of elements to be stored in the array : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("element - %d : ",i+1);
		scanf("%d", &num[i]);
	}
	for (i = 0; i < n; i++)
	{
		ch = 0;
		if (check[i] == 1)
		{
			continue;
		}
		for (j = 0; j < n; j++)
		{
		  if (j != i && num[i] == num[j])
		   {
				ch++;
				check[j] = 1;
	       }
		}
		if (ch>0)
		{
			count++;
		}
	}
	printf("Total number of duplicate elements found in the array is : %d\n", count);

}