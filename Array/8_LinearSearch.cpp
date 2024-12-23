#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int target;
    cin>>target;

    cout<<LinearSearch(arr, n, target);
    cout<<endl;

    return 0;
}


/*
Example 1:
Input: arr[]= 1 2 3 4 5, num = 3
Output: 2
Explanation: 3 is present in the 2nd index

Example 2:
Input: arr[]= 5 4 3 2 1, num = 5
Output: 0
Explanation: 5 is present in the 0th index

*/