#include <stdio.h>
#include <stdlib.h>

int main()
{
   int ar[10];
   int * restrict restar = (int *) malloc(10 * sizeof(int));
   int * par = ar;
   int n;

   for (n = 0; n < 10; n++)
   {
      restar[n] = n;
      ar[n] = n;
   }
   for (n = 0; n < 10; n++)
   {
      printf("%d : ", n);
      printf("p:%d r:%d a:%d ", par[n], restar[n], ar[n]);
      par[n] += 5;
      restar[n] += 5;
      ar[n] *= 2;
      printf("p:%d r:%d a:%d ", par[n], restar[n], ar[n]);
      par[n] += 3;
      restar[n] += 3;
      printf("p:%d r:%d a:%d\n", par[n], restar[n], ar[n]);      
   }
   return 0;
}