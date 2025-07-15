#include <stdio.h>

int main()
{
    float perimeter, width, length;

    printf("Enter the perimeter: ");
    scanf("%f", &perimeter);

    length = perimeter / 3.5;
    width = (length * 3)/4;
    
    printf("Width of the fence: %f\n", width);
    printf("length of the fence: %f\n", length);

    return 0;
}