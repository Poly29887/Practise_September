#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	long bi,sum = 0,digit,count=0;
	printf("Input Binary Number : ");
	scanf("%ld", &bi);
	printf("The Binary Number : %ld", bi);
	while (bi > 0)
	{
		digit = bi % 10;
		if (digit == 1)
		{
			sum += pow(2,count);
		}
		count++;
		bi = bi / 10;
	}
	printf("\nThe equivalent Decimal Number : %ld\n", sum);
}
