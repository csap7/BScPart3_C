// Registration Number: 012-1121-2540-14
// Date: 05-09-2018
// To determine the mean, median and mode of a given list of numbers

#include<stdio.h>
main()
{
    int n, i, j, maxcount, count;
    float a[12], sum=0, mean, median, t, maxnum;
    printf("\nEnter the number of inputs: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%f", &a[i]);
        sum=sum+a[i];
    }
    mean=sum/n;
    printf("Mean: %.3f", mean);
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
    if(n%2==0)
        median=0.5*(a[n/2]+a[n/2-1]);
    else
        median= a[(n-1)/2];
        printf("\nMedian: %.3f", median);
    for(i=0; i<=n; i++)
    {
        count=0;
        for(j=0; j<n; j++)
        {
            if(a[i]==a[j]) count++;
        }
        if (a[i]>maxcount)
        {
            maxcount=count;
            maxnum=a[i];
        }
    }
    printf("\nMode: %.3f", maxnum);
    printf("\nFrequency: %d", maxcount);
}

/* Output
Enter the number of inputs: 10
2
2
3
4
4
4
4
7
8
10
Mean: 4.800
Median: 4.000
Mode: 4.000
Frequency: 4
--------------------------------
Process exited after 14.74 seconds with return value 13
Press any key to continue . . . */
