class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum = 0, n= columnTitle.length();
        for(char c : columnTitle)
        {
            int a = c-'A'+ 1;
            sum = sum*26+a;
        }
        return sum;
    }
};