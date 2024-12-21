#include<bits/stdc++.h>
using namespace std;

vector<int> rotateArrayByOne(vector<int> arr, int n){
    vector<int> ans;
    int size = arr.size();
    int temp = arr[0];

    for(int i=1; i<size; i++){
        ans.push_back(arr[i]);
    }

    ans.push_back(temp);
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
    vector<int> ans = rotateArrayByOne(arr, n);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}