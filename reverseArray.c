#include <stdio.h>

void reverse(int A[], int size)
{
    int i = size - 1;
    assert(A != NULL);
    if(size < 2)
        return;

    for(;i >= size/2;i--)
    {
        temp = A[size - 1];
        A[size - i] = A[i - 1];
        A[i - 1] = temp;
    }
}



main()
{


}
