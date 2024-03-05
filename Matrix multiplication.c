//GEORGE JOHN OCHIERE
//ENE 212-0218/2021
#include <stdio.h>
int main ()
{
    int a[6][6], b[6][6], product[6][6];
    int arows, acolumns, brows, bcolumns;
    int sum=0;
    printf("Enter the rows and columns of array A: ");
    scanf("%d %d", &arows, &acolumns);
    printf("Enter the elements in the rows and columns of array A:\n ");
    for(int i=0; i<arows; i++)
    {
        for(int j=0; j<acolumns; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter the rows and columns of array B: ");
    scanf("%d %d", &brows, &bcolumns);
    if(brows !=acolumns)
    {
        printf("The two arrays cannot be multiplied.");
        return 0;
    }
    else
    {
        printf("Enter the elements in the rows and columns of array B:\n ");
        for(int i=0; i<brows; i++)
        {
            for(int j=0; j<bcolumns; j++)
            {
                scanf("%d", &b[i][j]);
            }
            printf("\n");
        }
    }
    for(int i=0; i<arows; i++)
    {
        for(int j=0; j<bcolumns; j++)
        {
            for(int k=0; k<brows; k++)
            {
               sum += a[i][k] * b[k][j]; 
            }
            product[i][j]= sum;
            sum= 0;
        }
    }
    printf("The product is:\n ");
    for(int i=0; i<arows; i++)
    {
        for(int j=0; j<bcolumns; j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}