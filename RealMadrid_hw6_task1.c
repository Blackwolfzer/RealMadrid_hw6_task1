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
void Polar (double x, double y, double *r, double *theta);
void ShowIt(double ra, double ang);
int AskQuestion(void);

/* Main Program */
int  main(int argc, char *argv[])
{
	int ans;
	ShowIt(1.0, 2.0);
	ans = AskQuestion();
	printf("%d\n",ans); // extra answer to check to see if function worked
	
	return 0;
}


/* Function Defenitions */

void Polar (double x, double y, double *r, double *theta)
{
	//r = sqrt(x^2 + y^2) theta = arctan (y/x)
	*r = sqrt(pow(x, 2) + pow(y, 2));
	*theta = atan(y/x);
	printf("Distance from origin: %lf\n", *r);
	printf("Angle (in degrees) from x-axis: %lf\n\n", *theta);
}

int AskQuestion(void)
{
	int a;
	while (1)
	{
		printf("Would you like to run this program againi (y/n):\n ");
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


void ShowIt(double ra, double ang)
{
	double rad, angl;
	rad = ra;
	angl = ang;
	printf("The radius is %lf\n and the angle is %lf\n" rad, angl);


	return;
}
