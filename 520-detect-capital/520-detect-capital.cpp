class Solution {
public:
    bool detectCapitalUse(string word) {
        if(islower(word[0]))
        {
            for(int i=1;i<word.length();i++)
            {
                if(isupper(word[i]))
                    return false;
            }
            return true;
                
        }
        if(isupper(word[0]))
        {
            int flag=isupper(word[1])?1:0;
            if(flag)
            {
                for(int i=2;i<word.length();i++)
                {
                    if(islower(word[i]))
                        return false;
                }
                return true;
            }
            else
            {
                for(int i=2;i<word.length();i++)
                {
                    if(isupper(word[i]))
                        return false;
                }
                return true;
            }
        }
        return false;
        
    }
};