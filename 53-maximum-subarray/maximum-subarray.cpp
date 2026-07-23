class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n ; 
        n=nums.size(); 
        int max=-99999;
        int i = 0;
        int sum=0 ; 
        for(i=0;i<n;i++)
        {
            sum+=nums[i]; // keeps on adding . 
            if(sum>max)
            {
                max=sum; // only updates if adding resulted in a good sol
            }
            if(sum<0)
            {
                sum=0;
            }

        }
        return max;
        
    }
};