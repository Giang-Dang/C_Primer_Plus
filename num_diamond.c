#include <stdio.h>

int main(void)
{
	int n, line, space, num;
	printf("Enter the number of rows to show number pattern: ");
	scanf("%d", &n);
	for(line = 0; line < n; line++)
	{
		for(space = 0; space < n - line; space++)
			printf(" ");
		for(num = 1; num < line * 2; num++)
            printf("%d", num);
        printf("\n");
	}

    for(line = n; line > 0; line--)
    {
        for(space = 0; space < n - line; space++)
            printf(" ");
        for(num = 1; num < line * 2; num++)
            printf("%d",num);
        printf("\n");
    }

    return 0;
}