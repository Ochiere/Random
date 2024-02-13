//George John Ochiere
//ENE 212-0218/2021
#include <stdio.h>
//Simple addition and subtraction calculator
int main()
{  
    double a,b,sum,diff;        
    printf("Enter the two numbers of your choice. \n");
    scanf("%lf %lf", &a, &b);
    sum=a+b;
    diff=a-b;
    printf("Summation is %f\n",sum);
    printf("Difference is %f\n",diff);
    printf("Summation and Difference are:%f\t %f\t", sum, diff);
    return 0;
}
