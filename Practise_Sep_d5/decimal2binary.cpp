#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	long bi_keep,bi, sum = 0, digit, count = 0;
	printf("Input Binary Number : ");
	scanf("%ld", &bi);
	bi_keep = bi;
	while (bi > 0)
	{
		digit = bi % 10;
		if (digit == 1)
		{
			sum += pow(2, count);
		}
		if (digit != 0 && digit != 1)
		{
			sum = -1;
			break;
		}
		count++;
		bi = bi / 10;
	}
	if (sum >= 0)
	{
		printf("The Binary Number : %ld", bi_keep);
		printf("\nThe equivalent Decimal Number : %ld\n", sum);
	}
	else if (sum == -1)
	{
	    printf("\n!! It is not BINARY NUMBER !!\n");
	}

}
