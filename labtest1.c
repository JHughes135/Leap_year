/* Lab Test 1
Descriptio: Program to check if 4-digit year is a leap year or not.
Compiler: Dev-C++
OS: Windows 10
James Hughes
24/10/16
*/

#include <stdio.h>

int main ()
{
	int year = 0;
	
	printf ("Please enter a 4-digit year\n");
	
	scanf ("%d", & year);
	
	//account for errors in input
	
	if (year < 1000 || year > 9999)
	{
		printf ("ERROR, Please enter a 4-digit year");
	}//end if

	else
	{
		if (year % 4 == 0)
		{
			if ((year% 100 == 0) && (year % 400 != 0))
			{
				printf ("%d is not a leap year", year);
			}//end if
			
			else
			{
				printf ("%d is a leap year", year);
			}//end else
			
		}//end if
	
	
		if (year % 4 != 0)
		{
			printf ("%d is not a leap year", year);
		}//end if

	}//end else
		
		
	return (0);
	
}//end main
