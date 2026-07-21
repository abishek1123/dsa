class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int  n; 
        n=nums.size(); 
        int count = 1;  
        int element = nums[0];
        int i  = 0 ;
        for(i=1;i<n;i++)
        {
            if(nums[i]==element)
            {
                count++;
            }
            else if(element!=nums[i])
            {
                count--; 
                if(count==0)
                {element=nums[i];
                count=1;}
            }
        }
        return element;
        
    }
};