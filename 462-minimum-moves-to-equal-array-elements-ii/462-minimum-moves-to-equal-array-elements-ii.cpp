class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int median;
        if( n & 1)
            median = nums[((n + 1)/2) - 1];
        else
            median = (nums[(n/2) - 1] + nums[(n/2)])/2;
        int count = 0;
        for(int i : nums){
            count += abs(median - i);
        }
        cout<<median;
        return count;
            
    }
};