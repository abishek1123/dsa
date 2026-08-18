class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int i = 0 ;
        for(i=1;i<n;i++)
        {
            if(nums[i-1]>nums[i])
            {
                return nums[i];
            }
        }
        return nums[0] ; 
    }
};