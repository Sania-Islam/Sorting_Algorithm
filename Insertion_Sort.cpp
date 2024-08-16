#include<bits/stdc++.h>
using namespace std;
//43, 31, 26, 29, 12.
void insertion(int A[], int n)
{
    for(int i=1; i<n; i++)
    {
        int temp = A[i]; //A[1] = 31
        int j = i-1;     //j = A[0] = 43
        while(j>=0 && A[j]>temp) // 43>31
        {
            A[j+1] = A[j]; ///31, 43,.......
            j--;
        }
        A[j+1] = temp; //temp = 43
    }
}
int main()
{
    int array[] = {43, 31, 26, 29, 12};
    int n = sizeof(array)/sizeof(array[0]);
    insertion(array, n);
    for(int i=0; i<n; ++i)
    {
        cout<<array[i]<< " ";
    }
}
