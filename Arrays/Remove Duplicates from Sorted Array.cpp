class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int>m;
        
        for(int i = 0 ;i<nums.size();i++)
        {   
            m.insert(nums[i]);
        }
        nums.clear();
         for(auto x: m)
        {   
           nums.push_back(x);
        }
        sort(nums.begin(),nums.end());
        return m.size();
    }
};
