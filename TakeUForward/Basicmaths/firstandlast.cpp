//sum of frist and last 
#include <bits/stdc++.h>
using namespace std;

int sumof1standlast(vector<int>& nums){
    if(nums.empty()){
        return 0;
    }
    int first = nums[0];
    int last = nums[nums.size()-1];
    return first + last;
}

int main(){
    int n;
    cin >> n;

    vector<int> nums{n};

    for (int i = 0; i<n; i++){
        cin>>nums[i];
    }

    cout << sumof1standlast(nums);
    return 0;
}