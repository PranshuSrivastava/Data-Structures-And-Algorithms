class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        stones.push_back(0);
        sort(stones.begin(),stones.end());
        while(1){
            sort(stones.begin(),stones.end());
            if(stones[stones.size()-2]==0)
                break;
            stones[stones.size()-1] -= stones[stones.size()-2];
            stones[stones.size()-2] = 0;
        }
        return stones.back();
        
    }
};