#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int n = nums.size();
        int k = n / 3;

        sort(nums.begin(), nums.end());

        vector<int> v;

        int count = 1;
        int j = nums[0];

        for(int i = 1; i < n; i++)
        {
            if(nums[i] == j)
            {
                count++;
            }
            else
            {
                if(count > k)
                {
                    v.push_back(j);
                }

                j = nums[i];
                count = 1;
            }
        }

        // Check the last element/group
        if(count > k)
        {
            v.push_back(j);
        }

        return v;
    }
};