class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0 ;
        int index = 1; 
        for(i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            {
                nums[index]=nums[i];
                index++;
            }
        }  
        return index ;
    }
    
};