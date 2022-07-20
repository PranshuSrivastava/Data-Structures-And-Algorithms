class Solution {
public:
    string optimalDivision(vector<int>& nums) {
        string ans = "";
        int n = nums.size();
        for(int i = 0; i < n; ++i){
            if(i == n - 1)
                ans+=to_string(nums[i]);
            else
                ans += to_string(nums[i]) + '/';
        }
        cout<<ans.size();
        if(nums.size() <= 2)
            return ans;
        int k = ans.find('/');
        ans.insert(k + 1, "(");
        ans += ')';
        return ans;
    }
};