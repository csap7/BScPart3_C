// Registration Number: 012-1121-2540-14
// Date: 02-08-2018
// Roots of Quadratic equations

#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c,x1,x2,d;
    printf("\nax^2 + bx + c");
    printf("\nEnter the values of a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    d=pow(b,2)-4*a*c;
    if(d>0)
    {
        x1=0.5*(-b+sqrt(d))/a;
        x2=0.5*(-b-sqrt(d))/a;
        printf("\n%f, %f", x1, x2);
    }
    if(d==0)
    {
        x1=0.5*(-b)/a;
        printf("\n%f, %f", x1, x1);
    }
    if(d<0)
    {
         x1=0.5*(-b)/a;
         x2=0.5*(sqrt(-d))/a;
        printf("\n(%f)+i(%f) \t (%f)-i(%f)", x1, x2, x2, x2);
    }
}

/* Output

	Case 1: d>0

ax^2 + bx + c
Enter the values of a, b, c: 1
4
0

0.000000, -4.000000
--------------------------------
Process exited after 4.769 seconds with return value 20
Press any key to continue . . .

		*****
		
	Case 2: d==0

ax^2 + bx + c
Enter the values of a, b, c: 1
2
1

-1.000000, -1.000000
--------------------------------
Process exited after 5.292 seconds with return value 21
Press any key to continue . . .

		*****
		
	Case 3: d<0

ax^2 + bx + c
Enter the values of a, b, c: 1
1
1

(-0.500000)+i(0.866025)          (0.866025)-i(0.866025)
--------------------------------
Process exited after 3.157 seconds with return value 49
Press any key to continue . . . */
