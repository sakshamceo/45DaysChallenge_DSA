class Solution {
public:
    int trap(vector<int>& v) {
    vector<int>a;
    vector<int>b;
    int j=v.size()-1;
    int maxi2=0, maxi=0;
    for(int i=0;i<v.size();i++)
    {
      maxi=max(maxi,v[i]);
      a.push_back(maxi);
      maxi2=max(maxi2,v[j]);
      b.push_back(maxi2);
      j--;
    }
        reverse(b.begin(),b.end());
    int curr=0;
      for(int i=0;i<v.size();i++)
    {
      curr=curr+ (min(a[i],b[i])-v[i]);
    }
    return curr;
    }
};
