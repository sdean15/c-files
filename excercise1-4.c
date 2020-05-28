#include <stdio.h>

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 100;
    step = 10;

    celsius = lower;

    printf("   \370C      \370F\n----------------\n");

    while(celsius <= upper)
    {
        fahr = (celsius * (9.0/5.0) + 32);
        printf("%6.1f %6.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
