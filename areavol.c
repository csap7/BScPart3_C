// Registration Number: 012-1121-2540-14
// Date: 08-01-2019
// Area and volume of different bodies

#include<stdio.h>
#include<math.h>

int main()
{
    int a_circle=0, a_triangle=0, v_sphere=0, v_cylinder=1; 

    if(a_circle)
    { 
        int r; 
        float area; 
        printf("Enter the radius of circle:\n");
        scanf("%d",&r);
        area = M_PI*pow(r,2);
        printf("Area of circle is %f\n", area);
    }

    else if(a_triangle)
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

    else if(v_sphere)
    { 
        int r; 
        float vol; 
        printf("Enter the radius of sphere:\n");
        scanf("%d",&r);
        vol = M_PI*pow(r,3)*4.0/3.0;
        printf("Volume of sphere is %f\n", vol);
    }

    else if(v_cylinder)
    { 
        int r,h; 
        float vol; 
        printf("Enter the radius and height of cylinder:\n");
        scanf("%d %d",&r,&h);
        vol = M_PI*pow(r,2)*h;
        printf("Volume of cylinder is %f\n", vol);
    }
    return 0;
}

/* Output
Enter the radius of circle:
5
Area of circle is 78.539818

--------------------------------
Process exited after 9.932 seconds with return value 0
Press any key to continue . . .

		*****
		
Enter the two sides and angle of triangle:
3
4
90
Area of triangle of two sides 3 and 4 with angle 90 degree is 6

--------------------------------
Process exited after 17.47 seconds with return value 0
Press any key to continue . . .

		*****
		
Enter the radius of sphere:
5
Volume of sphere is 523.598755

--------------------------------
Process exited after 6.527 seconds with return value 0
Press any key to continue . . .

		*****

Enter the radius and height of cylinder:
5
6
Volume of cylinder is 471.238892

--------------------------------
Process exited after 4.972 seconds with return value 0
Press any key to continue . . . */
