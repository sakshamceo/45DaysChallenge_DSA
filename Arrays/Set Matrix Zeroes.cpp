class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>top(matrix[0].size(),1);
        vector<int>left(matrix.size(),1);
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {top[j]=0;
                left[i]=0;
                }
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(top[j]==0 || left[i]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
    }
};
