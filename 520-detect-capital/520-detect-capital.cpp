class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt=0,pos;
        for(int i=0;i<word.length();i++)
        {
            if(isupper(word[i]))
            {
                cnt++;
                pos=i;
            }
        }
        if(!cnt || cnt==word.length() || pos==0)
            return true;
        return false;
        
    }
};