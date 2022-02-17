class Solution {
public:
    bool checkValidString(string s) {
        int l = 0; int r = 0;
        for(char c :s)
        {
            if(c == '(')
                l++,r++;
            else if(c==')')
                l--,r--;
            else
                l--,r++;
            l = max(0,l);
            if(r<l)
                return 0;
            
        }
        cout<<l<<" "<<r;
        
        return !l;
        
        
    }
};