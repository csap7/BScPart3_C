// Registration Number: 012-1121-2540-14
// Date: 29-08-2018
// To sort an array using bubble sort algorithm

#include<stdio.h>
void main()
{
    int n, i, j;
    float a[12], t;
    printf("\nEnter the number of inputs and numbers: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%f", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j+1]>a[j])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=0; i<n; i++)
    printf("\n%f", a[i]);
}

/* Output
Enter the number of inputs and numbers: 5
3
7
1
9
10

10.000000
9.000000
7.000000
3.000000
1.000000
--------------------------------
Process exited after 15.2 seconds with return value 5
Press any key to continue . . . */
