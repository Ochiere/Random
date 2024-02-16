//George John Ochiere
//ENE 212-0218/2021
#include <stdio.h>
int main()
{  
    char operator;
    double a,b,sum,diff,product,div;
    printf("Enter the operator (+, -, *, /)");
    scanf("%c", &operator);        
    printf("Enter the two numbers of your choice. \n");
    scanf("%lf %lf", &a, &b);
    switch (operator)
    {
        case '+':
            sum=a+b;
            printf("Summation is %f\n",sum);
            break;
        case '-':
            diff=a-b;
            printf("Difference is %f\n",diff);
            break;
        case '*':
            product=a*b;
            printf("The product is %f\n",product);
            break;
        case '/':
            div=a/b;
            printf("The division is %f\n",div);
            break;
        default:
            printf("Invalid operator\n");
    }   
    if (a>b) printf("%f is greater than %f\n", a, b);
    else if (a<b) printf("%fis less than %f\n", a, b);
    else printf("The numbers are equal.");
    return 0;
}