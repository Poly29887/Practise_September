#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	long num,sum = 0 , ten = 1,keep;
	printf("Enter a number to convert : ");
	scanf("%ld", &num);
	keep = num;
	while (num >= 1)
	{
		if (num % 2 != 0)
		{
			sum += ten;
		}
		else
		{
			sum += 0;
		}
		ten *= 10;
		if (num == 1)
		{
			break;
		}
		num = num / 2;
	}
	printf("The Binary of %d is %d\n",keep,sum);

}