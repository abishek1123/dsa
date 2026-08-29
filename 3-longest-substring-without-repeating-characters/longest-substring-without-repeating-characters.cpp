class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int , char> count ; 
        int left = 0; 
        int right = 0 ; 
        int best= 0 ; 
        for(right=0;right<(int)s.size();right++)
        {
            count[s[right]]++;
            while(count[s[right]]>1)
            {
                count[s[left]]--;
                if(count[s[left]]==0) count.erase(s[left]);
                left++;
            }
            best=max(best,right-left+1);
        }
        return best;
    }
};