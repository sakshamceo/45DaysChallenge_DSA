class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> a(3,0);
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        for(int k=0;k<n;k++)
        {
            int sum=(-1*nums[k]);
            int i=k+1,j=n-1;
            while(i<j)
            {
                if(nums[i]+nums[j]<sum)
                    i++;
                else if(nums[i]+nums[j]>sum)
                    j--;
                else
                {
                    a[0]=nums[k];a[1]=nums[i];a[2]=nums[j];
                    ans.push_back(a);
                    
                    //removing duplicates of i
                    while(i<j&&nums[i]==a[1])
                        i++;
                    
                    //removing duplicates of j
                    while(i<j&&nums[j]==a[2])
                        j--;
                }
            }
            
            //removing duplicates of k
            while(k+1<n&&nums[k+1]==nums[k])
                k++;
        }
        return ans;
    }
};
