#include <stdio.h>
int max (int a, int b, int c, int d);

int max (int a, int b, int c, int d)
{
    int max1, max2;
    return (max1 = (a>b?a:b) ) > ( max2 = (c>d?c:d) ) ? max1 : max2;
}
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("max: %d",max (a, b, c, d));
    return 0;
}