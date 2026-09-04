class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxarr = -99999;
        while(left<right)
        {
            int currarea=(min(height[left] , height[right]) * (right-left));
            if(currarea>maxarr) maxarr=currarea;
            if(height[left]<height[right]) left++;
            else right--;
        }  
        return maxarr;
    }
};