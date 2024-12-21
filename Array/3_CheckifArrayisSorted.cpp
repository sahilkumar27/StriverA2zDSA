#include <bits/stdc++.h>
using namespace std;

int isSorted(int n, vector<int> &arr){
    for (int i = 0; i < n-1; i++)
    {
        // If the current element is greater than the next element, then the array is not sorted
        if(arr[i] > arr[i+1]){
            return 0;      // arr is not sorted
        }
    }
    return 1;   // arr is sorted
    
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if(isSorted(n, arr)){
        cout << "Array is sorted, 1" << endl;
    } else {
        cout << "Array is not sorted, 0" << endl;
    }

    return 0;


}