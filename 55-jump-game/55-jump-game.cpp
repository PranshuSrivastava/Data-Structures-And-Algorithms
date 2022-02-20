class Solution {
public:
    bool canJump(vector<int>& nums) {
       int a =0;
        for(int i = 0;i<nums.size();++i)
        {
           
            if(a<i)
                return 0;
             if(i==nums.size()-1)
                return 1;
            a = max(a,i+nums[i]);
        }
    return 1;
    }
};