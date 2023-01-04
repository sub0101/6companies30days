#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
       vector<int> temp = nums;
       sort(nums.begin() , nums.end());
       int start=0,end=0;
  for(int i=0;i<nums.size();i++)
  {
      if(nums[i]!=temp[i]){start=i;break;}
  }
   for(int i=nums.size()-1;i>=0;i--)
  {
      if(nums[i]!=temp[i]){end=i;break;}
  }
  cout<<end<< " "<<start;
  if(start==end){return 0;}
  return end-start+1;

    }
};
