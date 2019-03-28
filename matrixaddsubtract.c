// Registration Number: 012-1121-2540-14
// Date: 12-09-2018
// Matrix addition and subtraction

#include<stdio.h>
main()
{
    int i, j, m, n, p, q, flag=0;
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
    if(m==p && n==q)
    {
        for(i=0; i<m; i++)
        for(j=0; j<n; j++)
        {
            flag = 1;
            c[i][j]=a[i][j]+b[i][j];
            d[i][j]=a[i][j]-b[i][j];
        }
    }
    else
    {
        printf("\nMatrices are not conformal for addition or subtraction.");
    }
    if(flag==1)
    {
        printf("\nThe sum of the matrices A and B is\n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                printf(" %f", c[i][j]);
            }
            putchar('\n');
        }
        printf("\nThe difference of the matrices A and B is\n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                printf(" %f", d[i][j]);
            }
            putchar('\n');
        }
    }
   
}

/* Output
Enter the number of rows and columns of matrix A: 2
2
1
0
0
1

Enter the number of rows and columns of matrix B: 2
2
1
0
0
1

The sum of the matrices A and B is
 2.000000 0.000000
 0.000000 2.000000

The difference of the matrices A and B is
 0.000000 0.000000
 0.000000 0.000000

--------------------------------
Process exited after 12.67 seconds with return value 2
Press any key to continue . . .

		*****
		
Enter the number of rows and columns of matrix A: 1
2
2
3

Enter the number of rows and columns of matrix B: 3
1
1
2
3

Matrices are not conformal for addition or subtraction.
--------------------------------
Process exited after 24.55 seconds with return value 56
Press any key to continue . . .*/
