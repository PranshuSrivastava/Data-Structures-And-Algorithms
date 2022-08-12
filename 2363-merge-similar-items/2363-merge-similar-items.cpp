class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> ret;
        map<int, int> m;
        for(auto i : items1){
            m[i[0]]+= i[1];
        }
        for(auto i: items2){
            m[i[0]] += i[1];
        }
        for(auto x: m){
            ret.push_back({x.first, x.second});
        }
        return ret;
    }
};