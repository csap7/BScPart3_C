// Registration Number: 012-1121-2540-14
// Date: 08-01-2019
// To determine area of circle

#include<stdio.h>
#include<math.h>

main()
{
	int r; 
    float area; 
    printf("Enter the radius of circle:\n");
    scanf("%d",&r);
    area = M_PI*pow(r,2);
    printf("Area of circle is %f\n", area);
}

/* Output
Enter the radius of circle:
5
Area of circle is 78.539818

--------------------------------
Process exited after 9.932 seconds with return value 0
Press any key to continue . . . */
