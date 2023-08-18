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
			printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		else if (year % 4 == 0)
		{
			if (month >= 2 && lyear >= 61)
				lyear++;
			printf("Day of the year: %d\n", lyear);
			printf("Remaining days: %d\n", 366 - lyear);
		}
		else
		{
			printf("Day of the year: %d\n", lyear);
			printf("Remaining days: %d\n", 365 - lyear);
		}
	}
}
/**
 * convert_day - converts day of month to day of year, without accounting
 * for leap year
 * @month: month in number format
 * @day: day of month
 * Return: day of year
 */

int convert_day(int month, int day)
{
        switch (month)
        {
                case 1:
                        day = 0 + day;
                        break;
                case 2:
                        day = 31 + day;
                        break;
                case 3:
                        day = 59 + day;
                        break;
                case 4:
                        day = 90 + day;
                        break;
                case 5:
                        day = 120 + day;
                        break;
                case 6:
                        day = 151 + day;
                        break;
                case 7:
                        day = 181 + day;
                        break;
                case 8:
                        day = 212 + day;
                        break;
                case 9:
                        day = 243 + day;
                        break;
                case 10:
                        day = 273 + day;
                        break;
                case 11:
                        day = 304 + day;
                        break;
                case 12:
                        day = 334 + day;
                        break;
                default:
                        break;
        }
        return (day);
}
