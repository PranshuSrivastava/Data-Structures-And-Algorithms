class Solution {
public:
    int countDigits(int n)
    {
        int count =0;
        do{
            n/=10;
            count++;
        }while(n);
        return !(count & 1);
    }
    int findNumbers(vector<int>& nums) {
        int count = 0;
       int n = nums.size();
       for(int i=0;i<n;i++)
       {
           count+=countDigits(nums[i]);
       }
        return count;
    }
};