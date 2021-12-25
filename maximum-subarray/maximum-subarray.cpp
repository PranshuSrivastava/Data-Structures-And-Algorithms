class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maximum=INT_MIN, maxi=0;
        for(int i=0;i<nums.size();i++)
        {
            maxi+=nums[i];
            maximum=max(maximum,maxi);
            if(maxi<0)
                maxi=0;
        }
        return maximum;
        
    }
};