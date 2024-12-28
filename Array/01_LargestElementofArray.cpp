#include <bits/stdc++.h>
using namespace std;

//! Recursive Approach
// int findLargestElement(int arr[], int n)
// {
//     int max = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     return max;
// }

//! Iterative Approach
// int largestElement(vector<int> &arr, int n)
// {
//     return *max_element(arr.begin(), arr.end());
// }


//! Using sort function
int largestElement(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());
    return arr[n-1];
}


int main()
{
    // int n;
    // cout << "Enter the size of the array: "; 
    // cin >> n;
    // int arr[n];
    // cout << "Enter the elements of the array: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // cout << "The largest element of the array is: " << findLargestElement(arr, n) << endl;

    
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int largest = largestElement(arr, n);
    cout<<largest<<endl;

    return 0;

}   