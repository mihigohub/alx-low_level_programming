#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes and prints how many day are
 * lest in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	int lyear;

	lyear = convert_day(month, day);
	if ((month >= 1 && month <= 12) && (day >= 1 && day <= 31))
	{
		if (((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) || (month == 2 && day > 29))
			;
		else if (month == 2 && day == 29 && year % 4 != 0)
		{
			printf("Date: %02d/%02d/%04d\n", month, day, year);
			printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		}
		else if (year % 4 == 0)
		{
			if (month >= 2 && lyear >= 61)
				lyear++;
			printf("Date: %02d/%02d/%04d\n", month, day, year);
			printf("Day of the year: %d\n", lyear);
			printf("Remaining days: %d\n", 366 - lyear);
		}
		else
		{
			printf("Date: %02d/%02d/%04d\n", month, day, year);
			printf("Day of the year: %d\n", lyear);
			printf("Remaining days: %d\n", 365 - lyear);
		}
	}
}
