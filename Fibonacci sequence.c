//George John Ochiere
//ENE 212-0218?2021
#include <stdio.h>
int main()
{
   int x=0, y=1, z, num, count;
   printf("Enter the number of terms to be generated\n");
   scanf("%d", &num);
   printf("\n%d \n%d\n", x, y);
   for (count=3;count <=num; count++)
   {
    z=x+y;
    printf("%d\n",z);
    x=y;
    y=z;
   }
   return 0; 
}

