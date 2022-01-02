class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int n= time.size(),count=0;
        vector<int> map(60,0);
        for(int i=0;i<n;i++)
        {
            int f=time[i]%60;
            count+=map[(60-f)%60];
            map[f]++;
        }
        return count;
    }
};