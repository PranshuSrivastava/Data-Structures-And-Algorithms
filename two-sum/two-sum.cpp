class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> sol(2);
        for(int i=0;i<n;i++)
        { 
            vector<int>::iterator a =find(nums.begin(),nums.end(),target-nums[i]);
            if(a!=nums.end() && (a-nums.begin())!=i)
            {
                sol[0]=i;
                sol[1]=a-nums.begin();
                break;
            }
        }
            return sol;
    }
};