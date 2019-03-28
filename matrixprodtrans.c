// Registration Number: 012-1121-2540-14
// Date: 12-09-2018
// Matrix multiplication and transpose

#include<stdio.h>
main()
{
    int i, j, k, m, n, p, q;
    float a[3][3], b[3][3], c[3][3], d[3][3];
    printf("\nEnter the number of rows and columns of matrix A: ");
    scanf("%d%d", &m, &n);
    for(i=0; i<m; i++)
    for(j=0; j<n; j++)
    {
        scanf("%f", &a[i][j]);
    }
    printf("\nEnter the number of rows and columns of matrix B: ");
    scanf("%d%d", &p, &q);
    for(i=0; i<p; i++)
    for(j=0; j<q; j++)
    {
        scanf("%f", &b[i][j]);
    }
    if(n==p)
    {
        for(i=0; i<p; i++)
        for(j=0; j<q; j++)
        {
            c[i][j]=0;
            for(k=0; k<n; k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
        printf("\nThe product of the matrices A and B is \n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                printf(" %f", c[i][j]);
            }
            putchar('\n');
        }
    }
    else
    {
        printf("\nIncompatible matrices.");
    }
    printf("\nThe traspose of the matrices A is \n");
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                printf(" %f", a[j][i]);
            }
            putchar('\n');
        }
   
}

/* Output
Enter the number of rows and columns of matrix A: 2
2
1
2
1
2

Enter the number of rows and columns of matrix B: 2
2
3
4
3
4

The product of the matrices A and B is
 9.000000 12.000000
 9.000000 12.000000

The traspose of the matrices A is
 1.000000 1.000000
 2.000000 2.000000

--------------------------------
Process exited after 10.22 seconds with return value 2
Press any key to continue . . .

		*****
		
Enter the number of rows and columns of matrix A: 2
3
1
2
3
1
2
3

Enter the number of rows and columns of matrix B: 1
1
1

Incompatible matrices.
The traspose of the matrices A is
 0.000000 0.000000
 0.000000 0.000000
 0.000000 0.000000

--------------------------------
Process exited after 19.77 seconds with return value 3
Press any key to continue . . . */
