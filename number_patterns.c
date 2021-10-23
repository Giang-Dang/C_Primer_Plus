#include <stdio.h>

int main(void)
{
	int Num_of_patterns;
	int count1, count2;

	printf("Enter the number of rows:\n");
	scanf("%d", &Num_of_patterns);

	for (count1 = 1; count1 <= Num_of_patterns; count1++)
	{
		for(count2 = 1; count2 <= Num_of_patterns; count2++)
		{
			if (count2 > count1)
				printf(" ");
			else
				printf("%d", count2);
		}

		for(count2 = Num_of_patterns; count2 >= 1; count2--)
		{
			if (count2 > count1)
				printf(" ");
			else
				printf("%d", count2);			
		}
		printf("\n");
	}

	return 0;
}