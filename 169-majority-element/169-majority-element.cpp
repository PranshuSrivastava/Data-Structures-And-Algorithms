class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size()/2,curr,count=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(!count)
            {
                curr=nums[i];
                count++;
            }
            else if( count && nums[i]!=curr)
            {
                count=1;
                curr=nums[i];
            }
            else
                count++;
            if(count>n)
                return curr;
        }
        cout<<count<<curr;
        return 0;
        
    }
};