class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];        
        vector<int> sol(nums.size()+1,-1);
        sol[0]=nums[0];
        sol[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++)
        {
            sol[i]=max(sol[i-1],nums[i]+sol[i-2]);
        }
        return sol[n-1];
    }
};