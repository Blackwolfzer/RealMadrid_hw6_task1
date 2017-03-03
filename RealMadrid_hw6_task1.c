/*
 * =====================================================================================
 *
 *       Filename:  RealMadrid_hw6_task1.c
 *       	Usage:  ./RealMadrid_hw6_task1.c
 *    Description:  :
 *
 *        Version:  1.0
 *        Created:  02/28/2017 05:07:32 PM
 *
 Compiler:  gcc -Wall -Werror -lm 
 *         Author:  Daniel Tayler (), danieltayler@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>
#include <math.h>

/* Function Prototypes */
void Usage(void);
void Polar (double x, double y, double *r, double *theta);
void ShowIt(double radius, double angle);
void GetRec(double* x, double* y);
int AskQuestion(void);

/* Main Program */
int  main(int argc, char *argv[])
{
	int close;
	double ar1, ar2, rad, ang;
	//Allow for 2 parameters
	if (argc !=3)
	{
		Usage();
	}
	//Convert input parameters to float
	ar1 = atof(argv[1]);
	if (ar1 == 0.0)
	{
		Usage();
	}
	ar2 = atof(argv[2]);
	if (ar2 == 0.0)
	{
		Usage();
	}
	while (1)
	{
		Polar(ar1, ar2, &rad, &ang);
		ShowIt(rad, ang);
		close = AskQuestion();
		if (close == 0)
		{
			break;
		}
		else
		{
			GetRec(&ar1,&ar2);
		}
	}
	printf("thankyou for useing this program\n");
	
	return 0;
}


/* Function Definitions */

void Polar (double x, double y, double *rad, double *ang)
{
	double p= (y/x);
	//r = sqrt(x^2 + y^2) theta = arctan (y/x)
	*rad = sqrt(pow(x, 2) + pow(y, 2));
	*ang = ((atan(p)) * 180)/3.14159;
	printf("Distance from origin: %lf\n", *rad);
	printf("Angle (in degrees) from x-axis: %lf\n\n", *ang);
}

int AskQuestion(void)
{
	int a;
	while (1)
	{
		printf("Would you like to run this program again (y/n):\n ");
		printf("   Y = 1      N = 0  \n");
		scanf("%d" , &a);
		if (a == 1)
		{
			break;
		}
		else if (a == 0)
		{
			
			break;
		}
		else
		{
			printf("Your answer is incorrect plz try again\n");
		}
	}
	
	return a;
}


void ShowIt(double radius, double angle)
{
	double rad, angl;
	rad = radius;
	angl = angle;
	printf("The radius is %f\n and the angle is %f\n", rad, angl);


	return;
}

void Usage(void)
{
	printf("Usage: ./polar x-coordinate y-coordinate\n");
	printf("both parameters are required\n");
	printf("must be a floating point\n");
	printf("x-coordinate CANNOT = 0\n");
	exit (1);
}

void GetRec(double* x, double* y)
{
	double xx, yy; // its working this way but i odn't know why pointers don't work
	printf("Rectanglar to Polar Coordinate Conversion\n");
	printf("Enter x-coordinate: ");
	scanf("%lf", &xx);
	printf("Enter y-coordinate: ");
	scanf("%lf", &yy);
	*x = xx;
	*y = yy;
	return;
}

