class Solution {
    vector<int>visited;
    int target;
    bool backtrack(vector<int>&nums,int x,int cur,int k){
        if(k==0)return true;
        if(cur>target)return false;
        
        if(cur==target)return backtrack(nums,0,0,k-1);
        
        for(int i=x;i<nums.size();i++){
            if(!visited[i]){
                if(cur+nums[i]<=target){
                    visited[i]=1;
                    if(backtrack(nums,i+1,cur+nums[i],k))return true;
                    visited[i]=0;
                }
                if(!cur || cur+nums[i]==target)return false;
                while(i+1<nums.size() && nums[i]==nums[i+1])i++;
            }
        }
        return false;
    }
    
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum=0;
        int n=nums.size();
        for(auto it:nums)sum+=it;
        if(nums.size()<k || sum%k)return false;
        visited.resize(n,0);
        target=sum/k;
        sort(nums.begin(),nums.end());
        return backtrack(nums,0,0,k);
        
    }
};