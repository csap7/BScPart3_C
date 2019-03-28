// Registration Number: 012-1121-2540-14
// Date: 08-01-2019
// Area and volume of sphere

#include<stdio.h>
#include<math.h>
main()
{
    int a_sphere=1, v_sphere=0; 
    if(a_sphere)
    { 
        int r; 
        float area; 
        printf("Enter the radius of sphere:\n");
        scanf("%d",&r);
        area = 4*M_PI*pow(r,2);
        printf("Area of sphere is %f\n", area);
    }
    else if(v_sphere)
    { 
        int r; 
        float vol; 
        printf("Enter the radius of sphere:\n");
        scanf("%d",&r);
        vol = M_PI*pow(r,3)*4.0/3.0;
        printf("Volume of sphere is %f\n", vol);
    }
}

/* Output
Enter the radius of sphere:
5
Area of sphere is 314.159271

--------------------------------
Process exited after 3.219 seconds with return value 29
Press any key to continue . . .

		*****
		
Enter the radius of sphere:
1
Volume of sphere is 4.188790

--------------------------------
Process exited after 5.011 seconds with return value 29
Press any key to continue . . . */
