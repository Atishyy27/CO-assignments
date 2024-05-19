#include <stdio.h>

struct Date
{
    int day, month, year;
};

int isLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1; // Leap year
    else
        return 0; // Not a leap year
}

int daysInMonth(int month, int year)
{
    int days;

    switch (month)
    {
    case 2:
        days = (isLeapYear(year)) ? 29 : 28;
        break;
    case 4: case 6: case 9: case 11:
        days = 30;
        break;
    default:
        days = 31;
    }

    return days;
}

int dateDifference(struct Date d1, struct Date d2)
{
    int days1 = d1.year * 365 + d1.day;
    for (int i = 1; i < d1.month; i++)
        days1 += daysInMonth(i, d1.year);

    int days2 = d2.year * 365 + d2.day;
    for (int i = 1; i < d2.month; i++)
        days2 += daysInMonth(i, d2.year);

    return days2 - days1;
}

int main()
{
    struct Date date1, date2;

    printf("Enter first date (DD MM YYYY): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    printf("Enter second date (DD MM YYYY): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    int difference = dateDifference(date1, date2);
    printf("Difference between the two dates: %d days\n", difference);

    return 0;
}
