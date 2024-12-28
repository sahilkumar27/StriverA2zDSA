#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b){
    map<int, int> mp;

    for(int i=0; i<a.size(); i++){
        mp[a[i]]++;
    }

    for(int i=0; i<b.size(); i++){
        mp[b[i]]++;
    }

    vector<int> ans;   
    for(auto &itr: mp){
        ans.push_back(itr.first);
    }

    return ans;
}


int main()
{
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }   

    vector<int> ans = sortedArray(a, b);

    for(auto num : ans){
        cout<<num<<" ";
    }

    
    return 0;
}