#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(int ar[], int n){
    unordered_set<int>s;
    vector<int>res;
    for(int i=0;i<n;i++) s.insert(ar[i]);
    for(auto i:s) res.push_back(i);
    sort(res.begin(),res.end());
    if(res.size()<n){
        int diff = n-res.size();
        while(diff--){
            res.push_back(0);
        }
    }

    for(auto j:res)
        cout<<j<<" ";

}
int main(){
    int nums[] = {1,1,2,1};
    removeDuplicates(nums,sizeof(nums)/sizeof(nums[0]));
    return 0;
}