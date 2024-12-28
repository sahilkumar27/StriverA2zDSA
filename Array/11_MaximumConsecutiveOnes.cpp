#include <bits/stdc++.h>    
using namespace std;    

int maxConsecutiveOnes(vector<int> nums)
{
    int maxi = 0;
    int count = 0;

    for(int i=0; i<nums.size(); i++){
        if(nums[i] == 1){
            count++;
        }
        else{
            count = 0;
        }

        maxi = max(maxi, count);
    }

    return maxi;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);

    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }

    cout << maxConsecutiveOnes(nums) << endl;

    return 0;
}


/*

Example 1:

Input: prices = {1, 1, 0, 1, 1, 1}

Output: 3

Explanation: There are two consecutive 1’s and three consecutive 1’s in the array out of which maximum is 3.

Input: prices = {1, 0, 1, 1, 0, 1} 

Output: 2

Explanation: There are two consecutive 1's in the array. 

*/