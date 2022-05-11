//https://www.youtube.com/watch?v=Uj3gJjg6SXc
class Solution {
public:
    int maxArea(vector<int>& v) {
       int lftptr=0,rtptr=v.size()-1,water=0;
       while(lftptr<=rtptr)
       { 
    water=max(water,(min(v[lftptr],v[rtptr])*(rtptr-lftptr)));
           if(v[lftptr]>v[rtptr])
           {
               rtptr--;
           }
           else
           {
               lftptr++;
           }
       }
       
        return water;
        
    
    }
};
