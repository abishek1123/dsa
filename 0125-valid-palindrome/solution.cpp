class Solution {
public:
    bool isPalindrome(string s) {
        int i=0 ; 
        int j=0 ; 
        int len; 
        string t =""; 
        for(char c:s)
        {
            if(isalnum(c))
            {
                t += tolower(c);
            }
        }
        len=t.length(); 
        j=len-1;
        while(i<j)
        {
            
            if(t[i]==t[j])
            {i++; 
            j--;
            }
            else
            {
                return false ;
            }
        }
        return true ; 
        
    }
};
