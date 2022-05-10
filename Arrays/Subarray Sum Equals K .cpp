class Solution {
public:
    int subarraySum(vector<int>& v, int k) {
       unordered_map<int,int>m;
        int sum=0,count=0;
        m[0]=m[0]+1;
        for(int i=0;i<v.size();i++)
        {   sum=sum+v[i];
            if(m.find(sum-k)!=m.end())
            {count=count+m[sum-k];
            }
            m[sum]=m[sum]+1;
            
        }
        return count;
    }
};
