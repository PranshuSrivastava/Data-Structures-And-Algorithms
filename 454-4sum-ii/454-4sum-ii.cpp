class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int count=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                mp[nums1[i]+nums2[j]]++;
            }
        }
        for(int i:nums3)
        {
            for(int j:nums4)
            {
                if(mp[-i-j])
                    count+=mp[-i-j];
            }
        }
        return count;
    }
};