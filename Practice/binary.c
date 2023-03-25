#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int decimal_number = 1;
    int power = 0;
    int final_number = 0;
    int array[] = {0, 1, 0, 1, 0, 1};
    for (int i = 0; i < sizeof(array)/4; i++)
    {
        decimal_number = array[i] * (pow(2, power));
        // printf("%d\n", decimal_number);
        final_number = final_number + decimal_number;
        power++;
    }
    printf("%d", final_number);
}