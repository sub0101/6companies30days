#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int> mp;
int length=INT32_MAX;
        for(int i=0;i<cards.size();i++)
        {
            if(mp[cards[i]]!=0)
            {
               int clength  = (i+1)-mp[cards[i]];
               if(clength<length){length=clength;}
            }
            
        mp[cards[i]]=i+1;
        
        }
        if(length==INT32_MAX){return -1;}
      return length+1;
    }
};