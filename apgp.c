// Registration Number: 012-1121-2540-14
// Date: 05-02-2019
// Arithmetic and Geometric Progression

#include<stdio.h>
#include<math.h>
main()
{
    int ap=0, gp=1;
    int a, d, r, n, value, i, sum=0;
    printf("Enter the number of terms in the series:\n");
    scanf("%d", &n);
  
    if(ap)
    {
        printf("Enter first term and common difference of AP series:\n");
        scanf("%d %d", &a, &d);
        value = a;
        printf("AP Series: ");
        for(i = 0; i < n; i++)
        {
            printf("%d ", value);
            sum += value;
            value = value + d;
        }
        printf("\nSum of AP series till %d terms in term-by-term is %d\n", n, sum);
        sum = (2*a + (n-1)*d)*n/2;
        printf("Sum of AP series till %d terms in direct computation is %d\n", n, sum);
    }
    else if(gp)
    {
        printf("Enter first term and common ratio of GP series\n");
        scanf("%d %d", &a, &r);
        value = a;
        printf("GP Series: ");
        for(i = 0; i < n; i++)
        {
            printf("%d ", value);
            sum += value;
            value = value * r;
        }
        printf("\nSum of GP series till %d terms in term-by-term is %d\n", n, sum);
        sum = a*(pow(r,n)-1)/(r-1);
        printf("Sum of GP series till %d terms in direct computation is %d\n", n, sum);
    }
    return 0;
}

/* Output
Enter the number of terms in the series:
5
Enter first term and common difference of AP series:
1
2
AP Series: 1 3 5 7 9
Sum of AP series till 5 terms in term-by-term is 25
Sum of AP series till 5 terms in direct computation is 25

--------------------------------
Process exited after 33.99 seconds with return value 0
Press any key to continue . . .

		*****
		

Enter the number of terms in the series:
3
Enter first term and common ratio of GP series
1
3
GP Series: 1 3 9
Sum of GP series till 3 terms in term-by-term is 13
Sum of GP series till 3 terms in direct computation is 13

--------------------------------
Process exited after 12.62 seconds with return value 0
Press any key to continue . . . */
