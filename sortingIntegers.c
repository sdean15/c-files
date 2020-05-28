#include <stdio.h>

#define SIZE 10 //size of array


void merge(int*, int low,int mid, int high);
void swapNums(int* dest, int* source);
void mergeSort(int* arr, int low, int high);

/*I didnt do many tests with this code but with the array provided
  with some minor changes it continued to work correctly.
  However this does not currently work with any negative number*/

main()
{
    int arr[] = {5, 2, 4, 8, 7, 1, 3, 9, 0, 6};

    printf("Unsorted Array: ");

    for(int a = 0; a < SIZE; a++)
    {
        printf("%d ", arr[a]);
    }

    printf("\nSorted Array:   ");

    mergeSort(arr, 0, 9);

    for(int a = 0; a < SIZE; a++)
    {
        printf("%d ", arr[a]);
    }


}

/*Function to merge the numbers back in sorted order*/
void merge(int* Arr, int start,int mid, int end)
{

	// crawlers for left and right side
	int i = start, j = mid+1, k = mid+2;

    //check i position on left with j position on right
	while(i <= mid && j <= end)
    {
        if(Arr[i] >= Arr[j])
        {
            /*swap the index next to i, then swap i and j,
              then increment i to continue
              else just continue to check with next j pos*/
            swapNums(&Arr[i], &Arr[i+1]);
            swapNums(&Arr[i], &Arr[j]);
            i++;
        }else{j++;}
    }

    /*Since the right part wasnt sorted yet,
      I just did some weird checks to make
      sure that everything was sorted*/
    while(k <= end)
    {

        if((Arr[k] >= Arr[end]))
        {
            swapNums(&Arr[k],&Arr[end]);
        }


        if(Arr[end - 1] <= Arr[k])
        {
            swapNums(&Arr[end-1],&Arr[k]);
        }

        if(Arr[end-1] >= Arr[end])
        {
            swapNums(&Arr[end-1], &Arr[end]);
        }
        k++;
    }

}


/*Function to split the array recursively, then calls merge function*/
void mergeSort(int* arr, int low, int high)
{
    int mid;

    if(low < high)
    {
        mid =(low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}


/*Function to swap the numbers of the array*/
void swapNums(int *dest, int *source)
{
    int temp;

    temp = *source;
    *source = *dest;
    *dest = temp;

}
