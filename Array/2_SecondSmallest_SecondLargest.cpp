#include <bits/stdc++.h>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> &arr) {
    // Sort the array
    sort(arr.begin(), arr.end());

    // Find the second smallest and second largest
    int secondSmallest = arr[1];  // Second smallest after sorting
    int secondLargest = arr[n - 2]; // Second largest after sorting

    // Return both as a vector
    return {secondSmallest, secondLargest};
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> secondOrderElements = getSecondOrderElements(n, arr);

    cout << "Second smallest: " << secondOrderElements[0] << endl;
    cout << "Second largest: " << secondOrderElements[1] << endl;

    return 0;
}
