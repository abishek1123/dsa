class Solution {
public:
    int trap(vector<int>& height) {
        //use prefix max and suffix max ;
        int n = height.size();
        int prefixmax[n];
        int suffixmax[n];
        int i=0;
        prefixmax[0]=height[0]; 
        for(i=1;i<n;i++)
        {
            prefixmax[i] = max(prefixmax[i-1], height[i]);
        }
        suffixmax[n-1]=height[n-1];
        for(i=n-2;i>=0;i--)
        {
            suffixmax[i] = max(suffixmax[i+1], height[i]);
        }

        int sum1 = 0 ; 
        for(i=0;i<n;i++)
        {
            if(height[i]<prefixmax[i] && height[i]<suffixmax[i])
            {
                sum1+=min(prefixmax[i] , suffixmax[i])-height[i];
            }
        }
        return sum1;

    }
};