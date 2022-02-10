class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
            int sum = 0;
        int count = 0;
        unordered_map<int, int> mp;
        mp[0]=1;
        for (int ele : nums)
        {
            sum+=ele;
            if (mp[sum - k])
                count += mp[sum - k];
                mp[sum]++;
        }
        return count;
        
    }
};