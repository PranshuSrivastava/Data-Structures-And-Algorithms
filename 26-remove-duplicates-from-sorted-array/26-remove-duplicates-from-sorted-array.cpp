class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(!nums.size())
            return 0;
        for(auto i=nums.begin()+1;i!=nums.end();i++)
        {
            if(*i==*(i-1))
            {
                nums.erase(i);
                i--;
            }
        }
        return nums.size();
        
    }
};