class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prof=0,min=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            if(min>prices[i])
            {
                min=prices[i]; //find kr min price kab tha
            }
            prof=max(prof,prices[i]-min); // or har dinn compare kr ki kis din stock ki value max aii
        }
        return prof;
    }
};
