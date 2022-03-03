class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3)
            return 0;
        int prev = nums[1] - nums[0];
        int count = 0, ind = 0;
        for(int i = 1;i<nums.size()-1;i++){
            int curr = nums[i+1] - nums[i];
            if(curr ==  prev){
                ind ++;
            }
            else 
            {
                ind = 0;
                prev = curr;
            }
            count+= ind;
        }
        return count ;
    }
};