#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& arr, int n){
    
    vector<int> ans;
    for(int i=0; i<n; i++){
        if(arr[i] != arr[i+1]){
            ans.push_back(arr[i]);
        }
    }
    for(int i=0; i<ans.size(); i++){
        arr[i] = ans[i];
        }
    return ans.size();
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans = removeDuplicates(arr, n);
    cout<<ans<<endl;


    return 0;
}