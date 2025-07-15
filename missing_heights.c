#include <stdio.h>

int main()
{
    float height1, height2, height3, average, total, missing1, missing2, totalof3;
    
    printf("Enter the heights of three known people: ");
    scanf("%f %f %f", &height1, &height2, &height3);

    printf("Enter the average height: ");
    scanf("%f", &average);

    total = average * 5;

    totalof3 = height1 + height2 + height3;

    missing1 = missing2 = (total - totalof3)/2;

    printf("1st missing : %f\n", missing1);
    printf("2nd missing : %f\n", missing2);

    return 0;
}