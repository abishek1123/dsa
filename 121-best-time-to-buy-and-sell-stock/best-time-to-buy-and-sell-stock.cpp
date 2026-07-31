class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = 999999 ; 
        int max1 = -99999 ; 
        int i = 0 ;
        int n = prices.size(); 
        for(i=0;i<n;i++)
        {
            if(prices[i]<min)
            {
                min=prices[i];
            }
            else if((prices[i]-min)>max1)
            {
                max1=prices[i]-min;
            }
        }
       if(max1<0)
       {
        return 0 ; 
       } 
       else
       return max1;
    }
};