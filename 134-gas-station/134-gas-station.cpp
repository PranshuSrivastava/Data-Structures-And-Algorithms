class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int current=0,total=0,start=0,n=gas.size();
        for(int i=0;i<n;i++)
        {
            int diff=gas[i]-cost[i];
            total+=diff;
            current+=diff;
            if(current<0)
            {
                current=0;
                start=i+1;
            }
        }
        if(total>=0)
            return start;
        return -1;
        
    }
};