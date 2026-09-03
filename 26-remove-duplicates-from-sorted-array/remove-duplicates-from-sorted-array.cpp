class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 1 ; 
        int j = 1 ;
        for(i=1;i<n;i++)
        {
            if(nums[j-1]!=nums[i])
            {
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};