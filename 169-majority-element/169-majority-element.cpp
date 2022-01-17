class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size()/2;
        map<int,int>m;
        for(int i:nums)
        {
            m[i]++;
        }
        for(auto i : m)
        {
            if(i.second>n)
                return i.first;
        }
        return 0;
        
    }
};