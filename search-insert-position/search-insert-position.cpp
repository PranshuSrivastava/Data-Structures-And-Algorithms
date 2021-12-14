class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size(),l=0,u=n-1,mid;
        if(target<nums[0])
            return 0;
        while(l<=u)
        {
            mid= l+(u-l)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                u=mid-1;
            else
                l=mid+1;
        }
        if(target<nums[mid])
            return mid;
        else 
            return mid+1;
    }
};