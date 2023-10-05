static char daytab[2][12] = {
	{0,31,28,31,30,31,30,31,31,30,31,30,31},
	{0,31,29,31,30,31,30,31,31,30,31,30,31}
	}

/*day_fo_year: set day of year from month and day*/
int day_of_year(int year, int month, int day)
{
	int leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
	char *p = daytab[leap];
	for(--month)
		day += *++p;
	return day;
}
/*month_day: set month, day from day of year*/
void month(int year, int yearday, int *pmonth, int *pday)
{
	int leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
	char *p = daytab[leap];

	while(yearday > *++p)
		yearday -= *p;
	*pmonth = p - *(daytab + leap);
	*pday = yearday;
	}
}
