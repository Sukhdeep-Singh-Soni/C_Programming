static char daytab[2][12] = {
        {0,31,28,31,30,31,30,31,31,30,31,30,31},
        {0,31,29,31,30,31,30,31,31,30,31,30,31}
        }

/*day_fo_year: set day of year from month and day*/
int day_of_year(int year, int month, int day)
{
        int leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
        if(month < 1 && month > 12)
                return -1
        if(day < 1 && day > daytab[leap][month])
                return -1
        for(i=1;i<month;i++)
                day += daytab[leap][i];
        return day;
}
/*month_day: set month, day from day of year*/
void month(int year, int yearday, int *pmonth, int *pday)
{
        int leap = year%4 == 0 && year%100 != 0 || year%400 == 0;

        for(i=1; i < 12 && yearday > daytab[leap][i]; i++)
                yearday -= daytab[leap][i];
        if(i > 12 && yearday > daytab[leap][12]) {
                *pmonth = -1;
                *pday = -1;
        } else {
        *pmonth = i;
        *pday = yearday;
        }
}

