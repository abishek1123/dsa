class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n ; 
        n=nums.size(); 
        int i = 0 ; 
        int arr[3]={0};
        for(i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                arr[0]++;
            }
            else if(nums[i]==1)
            {
                arr[1]++;
            }
            else{
                arr[2]++;
            }
        }
        int arr1[n];
        int j = 0 ; 
         while(arr[0]!=0)
        {
            arr1[j]=0;
            arr[0]--;
            j++;
        }
        while(arr[1]!=0)
        {
            arr1[j]=1;
            arr[1]--;
            j++;
        }
         while(arr[2]!=0)
        {
            arr1[j]=2;
            arr[2]--;
            j++;
        }
        for(i=0;i<n;i++)
        {
            nums[i]=arr1[i];
        }

    }
};