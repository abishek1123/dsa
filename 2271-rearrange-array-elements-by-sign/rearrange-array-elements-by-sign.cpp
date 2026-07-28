class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int i = 0;
        int j = 0;
        int k = 0;

        int n = nums.size();
        int s = n / 2;

        vector<int> arr(s);
        vector<int> arr2(s);

        for (i = 0; i < n; i++)
        {
            if (nums[i] > 0)
            {
                arr[j] = nums[i];
                j++;
            }
            else
            {
                arr2[k] = nums[i];
                k++;
            }
        }

        vector<int> ans(n);

        j = 0;
        k = 0;

        for (i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                ans[i] = arr[j];
                j++;
            }
            else
            {
                ans[i] = arr2[k];
                k++;
            }
        }

        return ans;
    }
};