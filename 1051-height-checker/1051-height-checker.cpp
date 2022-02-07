class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count=0;
        vector<int> checker = heights;
        sort(checker.begin(),checker.end());
        for(int i=0;i<heights.size();i++)
        {
            if(heights[i]!=checker[i])
            {
                count++;
            }
        }
        return count;
        
    }
};