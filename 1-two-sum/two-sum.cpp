class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0; 
        int j = 0;
        int n = nums.size();
        vector<int> sums;
        for(i=0;i<n;i++)
        {
            for(j=1;j<n;j++)
            {
                if(i!=j && nums[i]+nums[j]==target )
                {
                   sums.push_back(i);
                   sums.push_back(j);
                   return sums;
                }
            }
        }
        return {} ;
    }
};