class Solution {
public:
    static bool compare(vector<int>& a, vector<int>& b){
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), compare);
        int n = boxTypes.size(), ans = 0;
        for(int i = 0; i < n; ++i){
            if(truckSize - boxTypes[i][0] >= 0) 
            {
                ans += boxTypes[i][1]*boxTypes[i][0];
                truckSize -= boxTypes[i][0];
            }
            else{
                while(truckSize){
                    ans += boxTypes[i][1];
                    --truckSize;
                }
            }
            if(!truckSize)
                break;
        }
        return ans;
    }
};