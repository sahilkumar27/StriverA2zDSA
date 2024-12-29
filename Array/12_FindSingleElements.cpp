#include <bits/stdc++.h>
using namespace std;

int FindSingleElement(vector<int> arr)
{
    int n = arr.size();
    int left = 0;
    int right = n - 1;

    while (left <= right){
        int mid = left + (right - left) / 2;

        // Ensure 'mid' is the start of a pair (even index)
        if (mid % 2 == 0){
            mid--;
        }

        // if the pair is valid, move search to the right half
        if(arr[mid] == arr[mid+1]){
            right = mid + 2;
        }else{
            right = mid;
        }
    }
    // 'left' will point to the single element
    return arr[left];
}

// int getSingleElement(vector<int> &arr) {
//     // XOR-based solution: Elements appearing twice cancel out. 
//     int result = 0;
//     for (int num : arr) {
//         result ^= num;
//     }
//     return result;
// }

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<FindSingleElement(arr)<<endl;
    
    // cout<<getSingleElement(arr)<<endl; // Uncomment this line to use the XOR-based solution

    return 0;
}

/*

Sample Input 1:
5
1 1 2 2 3
Sample Output 1:
3

Explanation of sample output 1:
{1, 2} each occurs twice, whereas 3 occurs only once.
Hence the answer is 3.

Sample Input 2:
5
8 8 9 9 10
Sample Output 2:
10

Expected time complexity :
The expected time complexity is O(n), but try solving it in O(log n).

 */
