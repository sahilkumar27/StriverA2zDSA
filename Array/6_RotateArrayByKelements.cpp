#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end){
    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}


// Function to rotate array by k elements
void rotate(int arr[], int n, int k) {
    
    //reverse first k eleemt
    reverse(arr, 0, n-1);

    //reverse first n-k element
    reverse(arr, 0, k-1);

    //reverse whole array
    reverse(arr, k, n-1);
}



int main(){

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k;
    rotate(arr, n, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout<<endl;

    return 0;
}


/**
 Example 1:
Input: N = 7, array[] = {1,2,3,4,5,6,7} , k=2 , right
Output: 6 7 1 2 3 4 5
Explanation: array is rotated to right by 2 position .

Example 2:
Input: N = 6, array[] = {3,7,8,9,10,11} , k=3 , left 
Output: 9 10 11 3 7 8
Explanation: Array is rotated to right by 3 position.

 */