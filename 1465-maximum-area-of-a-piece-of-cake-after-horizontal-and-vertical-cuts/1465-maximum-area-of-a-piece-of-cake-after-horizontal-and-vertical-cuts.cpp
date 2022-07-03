class Solution {
public:
    int maxArea(int h, int w, vector<int>& n1, vector<int>& n2) {
        sort(n1.begin(), n1.end());
        sort(n2.begin(), n2.end());
        
        int ans = 0;
        int l, b;
        int mod = 1e9 + 7;
        l = max(n1[0], h - n1[n1.size() - 1]);
        b = max(n2[0], w - n2[n2.size() - 1]);
        for(int i = 1; i < n1.size(); i++) {
            l = max(n1[i] - n1[i-1], l);
        }
        for(int i = 1; i < n2.size(); i++) {
            b = max(n2[i] - n2[i-1], b);
        }
        return ((long long)l * (long long)b) % mod;
                
    
    }
};