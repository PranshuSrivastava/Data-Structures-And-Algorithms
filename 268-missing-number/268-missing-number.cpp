class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> check(nums.size()+1);
        for(int i : nums){
            ++check[i];
        }
        auto it = find(check.begin(), check.end(), 0);
        return it - check.begin();
        
    }
};