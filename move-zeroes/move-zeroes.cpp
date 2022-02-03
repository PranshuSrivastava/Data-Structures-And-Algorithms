class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=1;
        while(i<n && j<n)
        {
            if(!nums[i] and !nums[j])
                j++;
            else if(!nums[i] and nums[j])
            {
                swap(nums[i],nums[j]);
                i++;j++;
            }
            else
            {
                i++;j++;
            }
        }
        
        
    }
};