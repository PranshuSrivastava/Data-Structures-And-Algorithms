class Solution {
public:
    int countAsterisks(string s) {
        bool ok = 0;
        int count = 0;
        for(char c : s){
            if(c == '|')
                ok = !ok;
            else if(c == '*' and !ok)
                ++count;
        }
        return count;
    }
};