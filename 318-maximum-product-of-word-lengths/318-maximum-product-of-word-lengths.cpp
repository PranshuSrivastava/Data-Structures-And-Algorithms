class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n = words.size(), ans = 0;
        vector<int> mask(n);
        for(int i = 0; i < n; ++i){
            for(auto& ch: words[i]){
                mask[i] |= 1<<(ch-'a');
            }
            for(int j = 0; j<i; ++j){
                if((mask[i] & mask[j]) == 0)
                {
                    int curr = words[i].size()*words[j].size();
                    ans = max(ans, curr);
                }
            }
        }
        return ans;
        
    }
};