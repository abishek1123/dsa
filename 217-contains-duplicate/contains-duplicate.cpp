class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int , int > mp ;
        mp[nums[0]]=nums[0];
        for(int i = 1 ;i<nums.size();i++)
        {
            if(mp.find(nums[i])!=mp.end()) return true ; 
            else mp[nums[i]]=nums[i];
        }
        return false;
    }
};