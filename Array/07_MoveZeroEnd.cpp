#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeroEnd(vector<int> arr, int n){
    vector<int> ans;
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            ans.push_back(arr[i]);
        }else{
            count++;
        }
    }

    for(int i=0; i<count; i++){
        ans.push_back(0);
    }

    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<int> ans = moveZeroEnd(arr, n);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;

}

/*
Example 1:
Input:
 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
Output:
 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0
Explanation:
 All the zeros are moved to the end and non-negative integers are moved to front by maintaining order

Example 2:
Input:
 1,2,0,1,0,4,0
Output:
 1,2,1,4,0,0,0
Explanation:
 All the zeros are moved to the end and non-negative integers are moved to front by maintaining order

*/