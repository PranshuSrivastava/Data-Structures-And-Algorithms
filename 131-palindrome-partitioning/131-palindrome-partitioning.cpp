class Solution {
public:
    vector<vector<string>> sol;
    string str;
    bool isPalindrome(int start,int end)
    {
        while(start<end)
        {
            if(str[start]!=str[end])
                return false;
            start++;end--;
        }
        return true;
    }
    void backtrack(int start, vector<string> curr)
    {
        if(start>=str.size())
            sol.push_back(curr);
        for(int end=start;end<str.size();end++)
        {
            if(isPalindrome(start,end))
            {
                curr.push_back(str.substr(start,end-start+1));
                backtrack(end+1,curr);
                curr.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        str=s;
        backtrack(0,{});
        return sol;
        
        
    }
};