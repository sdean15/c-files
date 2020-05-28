#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define E 0.0001

float bisectionSqrt(float n)
    {
        //make n the abs val of n
        n = fabs(n);
        //make the upper bound half of n
        float upper_bound = n/2.0;
        float lower_bound = 1.0;
        float guess = 0.0;

        //Wont return a sqrt so print message then exit
        if(n == 0)
        {
            printf("Not possible operation");
            exit(0);
        }

        //Go through loop until guess is within error range
        do{
            //set guess to middle of upper and lower bounds
            guess = ((upper_bound + lower_bound) / 2.0);

            //check if guess is less than n or greater than n
            if(guess * guess > n)
            {
                //if guess is greater than n, set guess as upper bound
                upper_bound = guess;
            }else if(guess * guess < n)
            {
                //if guess is less than n, set guess as lower bound
                lower_bound = guess;
            }
        }while((guess * guess) - n >= E || (guess * guess) - n < 0.0);

        printf("%1.3f %1.3f", n, guess);

    }
/*Testing function
void test_bisectionalSqrt(void)
{
    CU_ASSERTS(bisectionalSqrt(-81) == 9);
    CU_ASSERTS(bisectionalSqrt(81) == 9);
    CU_ASSERTS(bisectionalSqrt(50) == 7.071);
}*/

main()
{
    bisectionSqrt(16);

    //test_bisectionalSqrt();
}


