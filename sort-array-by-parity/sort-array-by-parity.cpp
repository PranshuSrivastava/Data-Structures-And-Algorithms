class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int write=0,read=nums.size()-1;
        while(write<read)
        {
            if(nums[write]%2==0)
                write++;
            else if(nums[read]%2!=0)
                read--;
            else
            {
                int temp=nums[read];
                nums[read]=nums[write];
                nums[write]=temp;
                read--;
                write++;
            }
            
            }
        return  nums;
        
    }
};