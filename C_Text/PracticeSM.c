#include <stdio.h>
#include <stdlib.h>

void main()
{
    int var2 = 222;
    int *var1 = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", (var1 + i));
        printf("%d\n", (var1 + i));
    }
    // scanf("%d", (var1 + 0));
    // scanf("%d", (var1 + 1));
    // scanf("%d", (var1 + 2));

    for (int i = 0; i < 5; i++)
    {
        printf("%d %d, ", *(var1 + i), (var1 + i));

        // printf("%d  ", );
    }

    printf("\n%d", var2);
    printf("\n%d", &var2);
}

// address : 55448 + 0 = 55448, 55448 + 4 = 55452, 55452 + 4 = 55456, .....55448 + 20 = 55468 access : *55448
