class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count = 0;
        for(int i = 0; i < nums.size(); ++i){
            auto it = find(nums.begin(), nums.end(), nums[i] + diff);
            auto it1 = find(nums.begin(), nums.end(), nums[i] + 2*diff);
            if(it != nums.end() && it1 != nums.end()){
                ++count;
                
            }
        }
        return count;
    }
};