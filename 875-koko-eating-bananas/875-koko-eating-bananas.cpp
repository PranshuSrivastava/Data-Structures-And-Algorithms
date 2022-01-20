class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=INT_MIN,val,m;
        for(int x:piles)
            high=max(x,high);
        
        while(low<high)
        {
            m=(low+high)/2;
            int sum=0;
            for(int x:piles)
            {
                sum+=(x+m-1)/m;
            }
            if(sum>h)
                low=m+1;
            else 
                high=m;
        }
        return low;
        
    }
};