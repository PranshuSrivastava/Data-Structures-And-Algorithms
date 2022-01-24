class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>sol(cost.size()+1,0);
        if(n==1)
            return cost[0];
         sol[0]= cost[0];
        sol[1]=cost[1];
        for(int i=2;i<n;i++)
        {
            sol[i]=min(cost[i]+sol[i-1], cost[i]+sol[i-2]);
        }
        return min(sol[n-1],sol[n-2]);
        
    }
};