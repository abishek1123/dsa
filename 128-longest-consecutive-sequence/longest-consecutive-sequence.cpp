#import <algorithm>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //we use set unordered mainly 
        int n = nums.size();
        int i = 0 ; 
        unordered_set<int> st;
        for(i=0;i<n;i++) 
        {
            st.insert(nums[i]);
        }
        //now we have an unordered set with unique elements 
        //since its unordered we need to get and see if the element was first.
        int cnt = 1 ;
        int x = 1 ;
        int max1 = 0 ; 
        for(auto it : st)
        {
            if(st.find(it-1)==st.end())
            {
                cnt = 1 ; 
                x=it;
                while(st.find(x+1)!=st.end())
                {
                    cnt++;
                    x=x+1;
                }
                max1=max(cnt,max1);
            }
        }
        return max1;
    }
};