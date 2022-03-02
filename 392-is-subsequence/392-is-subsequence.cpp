class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1 = s.length(), n2 = t.length();
        if(!n1 && !n2)
            return true;
        if(!n2) 
            return false;
        if(!n1)
            return true;
        int k = 0;
        
        for(int i=0;i<t.length();i++){
            if(k==n1)
                return true;
            if(s[k]==t[i])
                k++;
        }
        if(k==n1)
            return true;
        
        return false;
        
    }
};