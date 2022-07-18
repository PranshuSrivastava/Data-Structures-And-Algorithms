class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        sort(nums.begin(), nums.end());
        int p = numsDivide[0];
        int n = numsDivide.size();
        for(int i = 1; i < n; ++i){
            p = __gcd(p, numsDivide[i]);
        }
        cout<<p;
        for(int i = 0; i < nums.size(); ++i){
            if(p%nums[i] == 0)
                return i;
        }
        return -1;
    }
};