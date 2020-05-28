#include <stdio.h>


int fibonacci(int n)
{
    //base case
    //Not accepting negatives as proper value
    if(n <= 1)
        return n;

    //use recursion until base case is met
    return fibonacci(n-1) + fibonacci(n-2);

}

main()
{
    int num = 7;
    printf("%d", fibonacci(num));

}
