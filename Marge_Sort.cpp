
#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left +1;
    int n2 = right - mid;

    //creat temporary arrays
    int L[n1], R[n2];

    //copy data to temporary arrays
    for(int i=0; i<n1; i++)
    {
        L[i] = arr[left+i];
    }
    for(int j=0; j<n2; j++)
    {
        R[j] = arr[mid + 1 + j];
    }

    int i=0; //initial index of first subarray
    int j=0; // initial index of second subarray
    int k = left; // initial index of merged subarray

    while(i < n1 && j< n2)
    {
      if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    // Copy the remaining elements of L[], if there are any
    while(i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while(j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

}

void mergeSort(int arr[], int left, int right)
{
    if(left<right)
    {
        int mid = left + (right - left)/2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);

        merge(arr, left, mid,right);
    }
}

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i];
        cout<< "\n";
    }
}
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr)/ sizeof(arr[0]);

    cout<< "Given array is \n";
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size -1);
    cout<< "\n Sorted array is: \n";
     printArray(arr, arr_size);

     return 0;
}
