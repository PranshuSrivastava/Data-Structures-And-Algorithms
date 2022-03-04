class Solution {
public:
    void rev(vector<char>& s, int i){
        if(i>=s.size()/2){
            return ;
        }
        swap(s[i],s[s.size()-1-i]);
        rev(s,i+1);
        return ;
    }
    void reverseString(vector<char>& s) {
        rev(s,0);
        
    }
};