
// inserrt element in sorted part of array

void insertionSort(int arr[], int n)
{
    int key,j;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
    // Move elements of arr[0..i-1],
    // that are greater than key,
    // to one position ahead of their
    // current position
    while(arr[j]>key && j>=0)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
    }
}