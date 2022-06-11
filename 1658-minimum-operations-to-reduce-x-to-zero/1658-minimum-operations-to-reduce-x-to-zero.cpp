class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum < x)
            return -1;
        if(sum == x)
            return nums.size();
        int target = sum - x, curr = 0, maxi = 0, start = 0;
        for(int i = 0; i < nums.size(); ++i){
            curr += nums[i];
            while(curr > target){
                curr -= nums[start++];
            }
            if(curr == target)
                maxi = max(maxi, i - start + 1);
        }
        return maxi == 0 ? -1: nums.size() - maxi;
        
    }
};