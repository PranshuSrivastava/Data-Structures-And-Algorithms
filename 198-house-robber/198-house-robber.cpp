class Solution {
public:
    int helper(vector<int>& nums, vector<int>& sol, int i)
    {
        if(i>=nums.size())
            return 0;
        int n=nums.size();
        if(n==1)
            return nums[0];
        if(n==2)
            return max(nums[1],nums[0]);
        if(sol[i]==-1)
                                                                                               sol[i]=max(helper(nums,sol,i+2)+nums[i],helper(nums,sol,i+1));
        return sol[i];
    }
    int rob(vector<int>& nums) {
        vector<int> sol(nums.size()+1,-1);
        cout<<sol[0];
        return helper(nums,sol,0);
        
    }
};