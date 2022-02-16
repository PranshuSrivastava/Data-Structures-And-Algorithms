class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> a(n,1);
        vector<int> b(n,1);
        for(int i = 1;i<n;i++)
        {
            a[i] = a[i-1]*nums[i-1];
        }
        for(int i = n-1; i ; i--)
        {
            b [i-1] = b[i]*nums[i]; 
        }
        vector<int> sol;
        for(int i=0;i<n;i++)
        {
            sol.push_back(a[i]*b[i]);
        }
        return sol;
        
    }
};