class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int m = str1.size(), n = str2.size();
        int check = __gcd(m, n);
        string ans = "";
        if(str1 + str2 == str2 + str1)
            ans = str1.substr(0, check);
        return ans;
        
    }
};