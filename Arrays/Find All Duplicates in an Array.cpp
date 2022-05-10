class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       unordered_set<int>s;
        vector<int>b;
        for(int i=0;i<nums.size();i++)
        {
            if(s.count(nums[i])==true)
            {
                b.push_back(nums[i]);
            }
            s.insert(nums[i]);
        }
        return b;
    }
};
