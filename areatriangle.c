// Registration Number: 012-1121-2540-14
// Date: 08-01-2019
// Area of a triangle

#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,s,theta,area; 
        printf("Enter the two sides and angle of triangle:\n");
        scanf("%f %f %f", &a, &b, &theta);
        theta = M_PI*theta/180.0;
        c = sqrt(a*a + b*b - 2.0*a*b*cos(theta));
        s = (a+b+c)*0.5;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area of triangle of two sides %g and %g with angle %g degree is %g\n", a, b, 180.0*theta/M_PI, area);
}

/* Output
Enter the two sides and angle of triangle:
3
4
90
Area of triangle of two sides 3 and 4 with angle 90 degree is 6

--------------------------------
Process exited after 17.47 seconds with return value 0
Press any key to continue . . . */
