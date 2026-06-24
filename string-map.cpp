#include <bits/stdc++.h>
using namespace std;

int main(){
    // To store frequency of all array elements
    vector<int>arr={1,2,3,4,5,2,3,2,4,2,4,54,3,5,32};
    vector<string>arr2={"abc","abs","abc","xyz","abcd","xyyz","xyz"};
    unordered_map<int,int>mp;
    unordered_map<string,int>mp2;
    int n= arr.size();
    for(int i = 0; i< n; i++){
        mp[arr[i]]++;
    }
    // for each loop
    for(auto it:mp){
        cout<<it.first<<" -> " <<it.second<<endl;
    }
    return 0;
}