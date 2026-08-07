class Solution {
public:
    bool rotateString(string s, string goal) {
        int i = 0; 
        int n ; 
        n=s.size();
        int g ; 
        g=goal.size();
        if(n!=g)
        {
            return false;
        }
        else{
        for(i=0;i<n;i++)
        {
            string temp ; 
            temp=s;
            rotate(temp.begin() , temp.begin()+i, temp.end());
            if(temp==goal)
            {
                return true ; 
            }
        }
        
    }
    return false;
    }
};