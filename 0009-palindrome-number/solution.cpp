class Solution {
public:
    bool isPalindrome(int x) {
        long long int t = 0 ; 
        t=x; 
        long long int y = 0;
        long long int ans = 0; 
        while(t!=0)
        {
            y=t%10;
            t=t/10;
            ans=10*ans+y;
        }
        if(x<0)
        {
            return false;
        }
        else if(ans==x)
        {
            return true ;
        }
        else {
            return false;
        }
    }
};
