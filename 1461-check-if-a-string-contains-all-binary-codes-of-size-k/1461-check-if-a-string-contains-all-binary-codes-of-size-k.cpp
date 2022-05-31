class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(k>=s.size())
            return 0;
        unordered_set<string> check;
        for(int i = 0; i<s.length() - k +1; ++i){
            check.insert(s.substr(i, k));
        }
        return check.size() == pow(2,k);
    }
};