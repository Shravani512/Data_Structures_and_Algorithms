
// TC O(logn)
//bottom to top
#include <iostream>
using namespace std;
 
#define MAX 1000 
void heapify(int arr[], int n, int i)
{
    //recusrrive

    // int parent = (i - 1) / 2;
    // if (arr[parent] > 0) {
    //     if (arr[i] > arr[parent]) {
    //         swap(arr[i], arr[parent]);
    //         heapify(arr, n, parent);
    //     }
    // }


    // non recurssive
    while(i>=1)
    {
        int parent=i/2;
        if(arr[parent]<arr[i])
        {
            swap(arr[parent],arr[i]);
            i=parent;
        }
        else{
            return;
        }
    }
    
}
void insertNode(int arr[], int& n, int Key)
{
    n = n + 1;
    arr[n - 1] = Key; //added the new element at the last of the giver heap array
    heapify(arr, n, n - 1);
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
 
    cout << "\n";
}
int main()
{
    int arr[MAX] = { 10, 5, 3, 2, 4 };
    int n = 5;
    int key = 15;
    insertNode(arr, n, key);
    printArray(arr, n);
    return 0;
}