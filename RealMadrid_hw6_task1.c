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

/* Function Prototypes */
void ShowIt(double ra, double ang);
int AskQuestion(void);

/* Main Program */
int  main(int argc, char *argv[])
{
	int ans;
	ShowIt(1,2);
	ans = AskQuestion();
	printf("%d\n",ans); // extra answer to check to see if function worked

	return 0;
}


/* Function Defenitions */


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
