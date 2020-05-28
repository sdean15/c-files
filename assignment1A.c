/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* A, int ASize, int* returnSize){

    int *B = (int*)malloc(ASize * sizeof(int));
    int start = 0;
    int end = ASize-1;
    *returnSize = ASize;

    //iterate through A
    for (int i = 0; i < ASize; i++)
    {
        //if A[i] is even, add to start of new array
        //else if A[i] is odd, add to the end of array
        if (A[i] % 2 == 0)
            B[start++] = A[i];
        else
            B[end--] = A[i];
    }

    return B;

}
