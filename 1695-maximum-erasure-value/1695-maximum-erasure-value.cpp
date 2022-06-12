class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int maxi = 0, curr = 0, n = nums.size();
        if(n == 1)
            return nums[0];
        vector<int> check(10001,-1);
        int start = 0;
        for(int i = 0; i < n; ++i){
            if(check[nums[i]] >= start){
                curr -= accumulate(nums.begin() + start, nums.begin() + check[nums[i]] + 1, 0);
                start = check[nums[i]] + 1;
                cout<<i<<endl;
            }
            
            curr += nums[i];
            check[nums[i]] = i;
            maxi = max(maxi, curr);
        }
        return maxi;
    }
};