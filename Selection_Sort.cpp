
#include<bits/stdc++.h>
using namespace std;

void selectionSort(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        int min_indx = i; // i =a[0] = a[0] = 5
        for(int j = i+1; j<n; ++j) // j = a[i+1] = a[1] = 4
        {
            if(a[j] < a[min_indx]) // 4 < 5
                min_indx  = j; ///minimum index = a[j] = a[1]
        }
        swap(a[min_indx], a[i]); ///4 , 5, ....
    }
}

int main()
{
    int array[] = {5 , 4, 10, 9, 2};
    int n = sizeof(array)/ sizeof(array[0]);
    selectionSort(array, n);
    for(int i=0; i<n; i++)
    {
        cout<<array[i]<< "\n";
    }
}
