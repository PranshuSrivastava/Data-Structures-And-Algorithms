class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int maxx=0,mask=0,n=nums.size();
        set<int>se;
        for(int i=30;i>=0;i--)
        {
            mask|=(1<<i);
            for(int i=0;i<n;i++)
            {
                se.insert(nums[i] & mask);
            }
            int newmaxx=maxx| (1<<i);
            for(int prefix:se)
            {
                if(se.count(newmaxx ^ prefix)){
                    maxx=newmaxx;
                    break;
                }
            }
            se.clear();
        }
        cout<<mask;
        return maxx;
        
    }
};