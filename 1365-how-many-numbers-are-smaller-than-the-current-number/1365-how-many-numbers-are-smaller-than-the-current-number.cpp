class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size(),count=0;
        vector<int> ans(n);
        vector<pair<int,int>> temp;
        for(int i=0;i<n;i++)
        {
            temp.push_back({nums[i],i});
        }
        sort(temp.begin(),temp.end());
        for(int i=0;i<temp.size();i++)
        {
            int count=lower_bound(temp.begin(),temp.end(),pair<int,int>(temp[i].first,0))-                 temp.begin();
            ans[temp[i].second]=count;
        }
        return ans;
        
    }
};