// Registration Number: 012-1121-2540-14
// Date: 09-08-2018
// Sine series

#include<stdio.h>
#include<math.h>
main()
{
    int i = 3;
    float x, sum, t;
    printf("Enter the value of angle: ");
    scanf("%f", &x);
    x=(x*M_PI)/180;
    sum = x;
    t = x;
    do
    {
        t=-(t*x*x)/(i*(i-1));
        sum=sum+t;
        i+=2;
    } while (fabs(t)>0.0001);
    printf("The value of Sin(x)= %f", sum);    
}

/* Output
Enter the value of angle: 30
The value of Sin(x)= 0.500000
--------------------------------
Process exited after 4.674 seconds with return value 29
Press any key to continue . . . */

