#include <stdio.h>
#include <conio.h>

int main(void)
{
    int n, line, star, space;
    printf("Enter number of rows to show star pattern: ");
    scanf("%d", &n);

    //1st triangle
    for (line = 0; line < n; line++)
    {
        for (space = n; space > line; space--)
            printf(" ");
        for (star = 0; star <= line; star++)
            printf("* ");
        printf("\n"); //end of a line
    }

    //upside-down triangle
    for (line = 1; line < n; line++)
    {
        for (space = 0; space < line; space++)
            printf(" ");
        for (star = n; star > line; star--) //Notice star = n
            printf("* ");
        printf("\n");
    }

    return 0;
}