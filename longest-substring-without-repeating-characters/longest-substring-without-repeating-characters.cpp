class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int result = 0,i=0;
        int chars=256;
        vector<int> last_index(chars,-1);
        int n=s.length();
        for(int j=0;j<n;j++)
        {
            i= max(i,last_index[s[j]]+1);
            result=max(result,j-i+1);
            last_index[s[j]]=j;
        }
        
        return result;
    }
};