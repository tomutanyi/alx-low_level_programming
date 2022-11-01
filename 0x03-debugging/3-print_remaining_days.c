#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are left in the year, giving nothing back
* @month: month in of the year to be printed out
* @day: day of the month to be printed out by program
* @year: year inputted by user of saif program
* Return: always nothing, (0)
*/

void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0) && (year % 400 == 0 || year % 100 != 0))
	{
		if (month >= 3 && day >= 60)
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
