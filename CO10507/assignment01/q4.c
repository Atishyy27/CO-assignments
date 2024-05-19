#include <stdio.h>
int main()
{
    int amt, r1, r2, r5, r10, r20, r50, r100, r200, r500;
    printf("Enter input amount: ");
    scanf("%d", &amt);

    r500 = amt / 500;
    amt = amt - 500 * r500;
    r200 = amt / 200;
    amt = amt - 200 * r200;
    r100 = amt / 100;
    amt = amt - 100 * r100;
    r50 = amt / 50;
    amt = amt - 50 * r50;
    r20 = amt / 20;
    amt = amt - 20 * r20;
    r10 = amt / 10;
    amt = amt - 10 * r10;
    r5 = amt / 5;
    amt = amt - 5 * r5;
    r2 = amt / 2;
    amt = amt - 2 * r2;
    r1 = amt / 1;
    amt = amt - 1 * r1;

    printf("Total 500 notes: %d\n", r500);
    printf("Total 200 notes: %d\n", r200);
    printf("Total 100 notes: %d\n", r100);
    printf("Total 50 notes: %d\n", r50);
    printf("Total 20 notes: %d\n", r20);
    printf("Total 10 notes: %d\n", r10);
    printf("Total 5 notes: %d\n", r5);
    printf("Total 2 notes: %d\n", r2);
    printf("Total 1 notes: %d\n", r1);
    return 0;
}
