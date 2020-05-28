#include <stdio.h>

//tried to use but gave error
//#include <CUnit/Basic.h>

void printAllPrimeNumbers(int n)
{
    //if n is greater than two, then we find all prime numbers below
    if(n > 2)
    {
        int i, j;

        //loops up until we hit n
        for(i = 3; i < n; i++)
        {
            //var to store amount of factors
            int factors = 0;

            //loops through to n again to find factors of each number
            for(j = 1; j <= n; j++)
            {
                //if modulus equals zero, then it is a factor
                if(i % j == 0)
                    factors++;
            }
            //if only get two factors then must be a prime number
            if(factors == 2)
                printf("%1d ",i);
        }
    //if n is two, then we know it is prime and nothing else is below it
    }else if(n == 2)
    {
        printf("2 is the only prime number");

    //if less than two then there are no prime numbers
    }else
    {
        printf("No prime numbers");
    }
}

/*Testing function
void test_printAllPrimeNums(void)
{
    CU_ASSERTS(printAllPrimeNumbers(0) == "No prime numbers");
    CU_ASSERTS(printAllPrimeNumbers(2) == "2 is the only prime number");
    CU_ASSERTS(printAllPrimeNumbers(10) == "3 5 7");
}*/




main()
{
    printAllPrimeNumbers(10);


    //would run this function
    //test_printAllPrimeNums();
}
