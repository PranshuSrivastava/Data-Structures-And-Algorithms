class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1)
            return n;
        unordered_map<int,int> mp;
        for(int i=0;i<trust.size();i++)
        {
            mp[trust[i][1]]++;
            mp[trust[i][0]]--;
            
        }
        for(auto i: mp)
            if(i.second==n-1)
                return i.first;
        return -1;
        
    }
};