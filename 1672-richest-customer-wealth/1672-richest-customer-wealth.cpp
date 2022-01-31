class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxx=0, sum = 0;
        int r= accounts.size();
        for(int i=0;i<r;i++)
        {
            for(int j: accounts[i])
                sum+=j;
            maxx=max(maxx,sum);
            sum=0;
        }
        return maxx;
        
    }
};