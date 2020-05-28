#include <stdio.h>


int binarySearch(int arr[], int start, int end, int target)
{
    //get midpoint
    int mid = (start + end) / 2;

    //incorrect argument of array start/end index
    //or number not found returns -1
    if (start > end)
        return -1;

    //if the midpoint equals target, return that index
    //else use recursion until target is found
    if (arr[mid] == target)
        return mid;
    else if(arr[mid] < target)
        return binarySearch(arr, mid + 1, end, target);
    else
        return binarySearch(arr, start, mid-1, target);
}


main()
{
    int A[] = {4, 9, 13, 15, 20, 29, 36, 42, 55, 64, 79, 83};

    int target = 42;

    printf("%d is found at index %d", target, binarySearch(A,0,11,target));


}
