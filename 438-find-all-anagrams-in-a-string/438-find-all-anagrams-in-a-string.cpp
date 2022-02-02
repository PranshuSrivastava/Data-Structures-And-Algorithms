class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int l1 = s.length(), l2 = p.length();
        if(l2>l1)
            return {};
        vector<int> freq(26,0);
        vector<int> window(26,0);
        for(int i=0;i<l2;i++)
        {
            freq[p[i]-'a']++;
            window[s[i]-'a']++;
        }
        vector<int> ans;
        if(freq==window)
            ans.push_back(0);
        for(int i=l2;i<l1;i++)
        {
            window[s[i-l2]-'a']--;
            window[s[i]-'a']++;
            
            if(freq==window)
                ans.push_back(i-l2+1);
        }
        return ans;
    }
};