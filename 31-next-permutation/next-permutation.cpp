#include<algorithm>
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int i = 0 ; 
        int j = 0 ; 
        int n = 0 ; 
        int sum1 = 0 ; 
        int bp = 0 ;
        int h=1;
        int k = 0;
        n=nums.size(); 
        for(i=n-1; i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                bp=i-1;
                h=0;
                break;
    
            }
            else
            {
                h=1;
            }
            
        }
        if(h==1)
        {
            reverse(nums.begin() , nums.end());
            return;
        }

        for(i=n-1;i>0;i--)
        {
            if(nums[i]>nums[bp])
            {
                swap(nums[i] , nums[bp]);
                k=1;
                break;
            }

        }
        if(k==1)
        {
            reverse(nums.begin() + bp + 1, nums.end());
            return;

        }




    }
};