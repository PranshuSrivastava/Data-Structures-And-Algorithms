class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        map<vector<int>, vector<string>> mp;
        for(int i=0;i<strs.size();i++)
        {
            vector<int> c(26);
            for(char d:strs[i])
            c[d-'a']++;
            mp[c].push_back(strs[i]);
        }
        vector<vector<string>> s;
        for(auto i : mp)
        {
            s.push_back(i.second);
        }
        return s;
    }
};        
    