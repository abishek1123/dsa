class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int j = 0 ; 
        int sum1 = 0 ; 
        int count= 0 ; 
        int i = 0 ; 
        int n = 0 ;
        n=nums.size();
        for(i=0;i<n;i++)
        {
            sum1=0;
            for(j=i;j<n;j++)
            {
                sum1+=nums[j];
                if(sum1==k)
                {
                    count++;
                }
            }
        }

        return count;
    }
};