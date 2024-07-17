//! TWO SUM LEETCODE PROBLEM (with slight change)
//! Her instead of returning the indices, return bool value YES or NO

#include<bits/stdc++.h>
using namespace std;

bool twoSum2(vector<int> nums,int target){
   sort(nums.begin(),nums.end());
   int i=0;
   int j = nums.size()-1;
   while(i<j){
    int sum = nums[j]+nums[i];
    if(sum<target) i++;
    else if(sum>target) j--;
    else if(sum==target) return 1;
   }
   return 0;
}

int main() {
vector<int> nums={1,3,2,5,4,2,8};
int target = 14;
cout<<twoSum2(nums,target);

return 0;
}