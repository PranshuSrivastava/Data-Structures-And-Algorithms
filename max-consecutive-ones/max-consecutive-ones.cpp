class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi =0,count=0;
        for(int i:nums)
        {
            count = i==1? count+1:0;
            maxi = max(count,maxi);
        }
        return maxi;
    }
};