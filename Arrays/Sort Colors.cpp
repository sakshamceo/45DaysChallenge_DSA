class Solution {
public:
    void sortColors(vector<int>& v) {
        int r=0,w=0,b=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==0)
        {
            r++;
        }
         if(v[i]==1)
        {
            w++;
        }
    }
        b = v.size() -w-r;
        v.clear();
        while(r--)
        {
            v.push_back(0);
        }
         while(w--)
        {
            v.push_back(1);
        }
           while(b--)
        {
            v.push_back(2);
        }
    }
};
