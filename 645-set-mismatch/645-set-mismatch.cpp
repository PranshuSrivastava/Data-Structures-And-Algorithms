class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans(2);
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int sum = nums[0];
        for(int i = 1; i < n; ++i){
            if(nums[i] == nums[i - 1])
                ans[0] = nums[i];
            else
                sum += nums[i];
            cout<<sum<<endl;
        }
        ans[1] = (n*(n + 1)/2) - sum;
        return ans;
    }
};