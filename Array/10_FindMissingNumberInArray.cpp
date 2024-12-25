#include <bits/stdc++.h>
using namespace std;

int missingNumberInArray(vector<int> arr, int n){
    
    // Calculate the expected sum of numbers from 1 to n
    int expectedSum = n * (n + 1) / 2;

    // Calculate the sum of elements in the array
    int actualSum = 0;
    for (int num : arr) {
        actualSum += num;
    }

    // The missing number is the difference between expected and actual sums
    return expectedSum - actualSum;
    
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n - 1); // Size is n-1 because one number is missing
    for (int& num : arr) {
        cin >> num;
    }

    // Output the missing number
    cout << missingNumberInArray(arr, n) << endl;

    return 0;
}

/*
Sample Input 1 :
4 
1 2 3
Sample Output 1:
4
Explanation Of Sample Input 1:
4 is the missing value in the range 1 to 4.
Sample Input 2:
8
1 2 3 5 6 7 8
Sample Output 2:
4
Explanation Of Sample Input 2:
4 is the missing value in the range 1 to 8.
Expected time complexity:
The expected time complexity is O(n).
Constraints:
1 <= 'n' <= 10^6 
1 <= 'a'[i] <= 'n'
Time Limit: 1 sec
 */