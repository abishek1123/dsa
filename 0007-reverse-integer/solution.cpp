class Solution {
public:
    int reverse(int x) {
        int i = 0;
        long long int ans =0 ; 
        int len=0;
        int t =0 ; 
        t=x;
        while(t!=0)
        {
            t=t/10;
            len++;
        }
        while(x!=0)
        {
        int y ;
        y=x%10;
        x=x/10;
        ans=10*ans+y;
        }
        if(ans> (pow(2,31)-1) || ans<-1*(pow(2,31)))
        {
            return 0 ; 
        }
        else 
        {
            return ans;
        }
        






        
    }
};
