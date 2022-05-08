class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>s;
        int p=0;
        for(int i=0;i<nums.size();i++)
        {
            if(s.count(nums[i]))
            {
                p=nums[i];
            }
            s.insert(nums[i]);
        }
       
         return p;
    }
};