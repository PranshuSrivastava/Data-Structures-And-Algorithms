class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> runningSums(nums.size());
        runningSums[0] = nums[0];
        for(int i = 1; i< nums.size(); ++i){
            runningSums[i] = runningSums[i-1] + nums[i];
        }
        return runningSums;
    }
};