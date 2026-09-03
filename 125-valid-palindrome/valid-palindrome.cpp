class Solution {
public:
    bool isPalindrome(string s) {
        string stripped;
        for(char &c : s)
        {
            if(!isalnum(c))
            {
                    continue ;
            }

            c=tolower(c);
            stripped+=c;

            
        }

        int i = 0 ;
        int j = stripped.length()-1;

        while(i<j)
        {
            if(stripped[i]==stripped[j])
            {
                i++;
                j--;
                continue ;
               
            }
            else
            {
                return false;
            }
        }

        return true;
    }
};