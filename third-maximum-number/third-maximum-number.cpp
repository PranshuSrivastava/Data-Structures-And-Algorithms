class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        vector<int> a(3,INT_MAX); int k=1;
        a[0]=nums[0];
        for(int i =1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
                a[k++]=nums[i];
            if(a[2]!=INT_MAX)
                break;
        }
        return a[2]!=INT_MAX?a[2]:*max_element(nums.begin(),nums.end());
    }
};