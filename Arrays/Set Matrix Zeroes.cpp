class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int>top;
        unordered_set<int>left;
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {top.insert(j);
                left.insert(i);
                }
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(top.find(j)!=top.end() || left.find(i)!=left.end())
                {
                    matrix[i][j]=0;
                }
            }
        }
    }
};
