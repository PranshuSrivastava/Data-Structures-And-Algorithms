class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.empty())
            return -1;
        int mid;
        if(nums[0]<=nums.back())
        {
            int lb = 0, ub = nums.size()-1;
            while(lb<=ub)
            {
                mid = ((ub-lb)/2) + lb;
                if(nums[mid]==target)
                    return mid;
                else if(nums[mid]<target)
                    lb = mid+1;
                else 
                    ub = mid-1;
            }
            return -1;
        }
        if(target>=nums[0])
        {
            int lb = 0, ub = nums.size()-1;
            while(lb<=ub)
            {
                mid = ((ub-lb)/2) + lb;
                if(nums[mid]==target)
                    return mid;
                else if(nums[mid]>=nums[0] && nums[mid]<target)
                    lb = mid+1;
                else 
                    ub = mid-1;
            }
            return -1;
            
        }
        else
        {
            int lb = 0, ub = nums.size()-1;
            while(lb<=ub)
            {
                mid = ((ub-lb)/2) + lb;
                if(nums[mid]==target)
                    return mid;
                else if(nums[mid]>=nums[0] || nums[mid]<target)
                    lb = mid+1;
                else 
                    ub = mid-1;
            }
            return -1;
        }
        
        
    }
};