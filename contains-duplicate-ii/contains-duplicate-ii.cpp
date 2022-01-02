class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        
        int n=nums.size();
        unordered_map<int,int> mp,count;
        for(int i=0;i<n;i++)
        {
            if(count[nums[i]]>0)
            {
               
                if(abs(mp[nums[i]]-i)<=k)
                    return true;
            }
            count[nums[i]]++;
            mp[nums[i]]=i;
        }
        return false;
    }
};