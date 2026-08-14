class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = 0; 
        n=nums.size();
        int i = 0 ;
        int index = 1; 
        int c =1; 
        for(i=1;i<n;i++)
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