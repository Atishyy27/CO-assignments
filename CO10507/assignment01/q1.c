#include <stdio.h>
int main()
{

    int unit;
    float amt;
    printf("Enter total Units: ");
    scanf("%d", &unit);

    if (unit <= 50)
    {
        amt = unit * 0.50;
    }
    else if (unit <= 150)
    {
        amt = (unit - 50) * 0.75 + 50 * 0.50;
    }
    else if (unit <= 250)
    {
        amt = (unit - 150) * 1.2 + 100 * .70 + 50 * .50;
    }
    else
    {
        amt = (unit - 250) * 1.5 + 100 * 1.2 + 100 * .70 + 50 * .50;
    }
    amt = 1.2 * amt;

    printf("the total bill will be: %.2f", amt);

    return 0;
}