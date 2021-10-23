#include <stdio.h>
#include <string.h>

int main(void)
{
	char *list[6];
	int count = 0;

	for (int i = 0; i < 6; i++)
	{
		scanf("%s", list[i]);
		printf("%s\n", list[i]);
	}

	return 0;
}