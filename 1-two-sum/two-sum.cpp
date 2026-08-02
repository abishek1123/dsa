#include <algorithm>
#include <bits/stdc++.h>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0 ;
        int n = nums.size() ; 
        int j = n - 1 ; 
        int flag = 1 ; 
        vector<int> a ; 
        vector<pair<int , int >> ab ; 
        int k = 0 ; 
        for(k=0;k<n;k++)
        {
            ab.push_back({nums[k] , k});
        }
        sort(ab.begin() , ab.end());
        while(i<j)
        {
            if((ab[i].first+ab[j].first)<target)
            {
                i++;
            }
            else if((ab[i].first+ab[j].first)>target)
            {
                j--;
            }
            else if((ab[i].first+ab[j].first)==target)
            {
                a.push_back(ab[i].second);
                a.push_back(ab[j].second);
                return a ; 
            }

        }
        return {-1 , -1 }; 
    }
};