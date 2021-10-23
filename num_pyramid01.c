#include <stdio.h>
int main(void)
{
    int row, line, space, num;
    printf("Enter the number of row to print the number pyramid pattern: ");
    scanf("%d", &row);
    for (line = 1; line <= row; line++)
    {
        for(num = 1; num <= line; num++)
            printf("%d", num);
        for(space = 1; space <= ((row - line) * 2); space++)
            printf(" ");
        for(num = 1; num <= line; num++)
            printf("%d", num);
        printf("\n");
    }

    return 0;
}