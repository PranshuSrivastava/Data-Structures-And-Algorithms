#define ll long long
class Solution {
public:
    long long countExcellentPairs(vector<int>& nums, int k) {
        unordered_set<int> s(nums.begin(), nums.end());
        vector<int> v;
        for(int i: s)
            v.push_back(__builtin_popcount(i));
        ll ans = 0;
        sort(v.begin(), v.end());
        for(int i = 0; i < v.size(); ++i){
            auto it = lower_bound(v.begin(), v.end(), k - v[i]);
            ans += v.end() - it;
        }
        return ans;
    }
};