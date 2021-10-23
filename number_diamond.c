#include <stdio.h>

int main(void)
{
	int Num_of_patterns;
	int count1, count2;

	printf("Enter the number of rows:");
	scanf("%d", &Num_of_patterns);

	for (count1 = 1; count1 <= Num_of_patterns; count1++)
	{
		//front spaces
		for (count2 = 1; count2 <= (Num_of_patterns - count1); count2++)
			printf(" ");
		//number
		for (count2 = 1; count2 <= (count1 * 2 - 1); count2++)
			printf("%d", count2);

		printf("\n");	
	}

	for (count1 = Num_of_patterns - 1; count1 >=1; count1--)
	{
		//front spaces
		for (count2 = 1; count2 <= (Num_of_patterns - count1); count2++)
			printf(" ");
		//number
		for (count2 = 1; count2 <= (count1 * 2 - 1); count2++)
			printf("%d", count2);

		printf("\n");	
	}

	return 0;
}