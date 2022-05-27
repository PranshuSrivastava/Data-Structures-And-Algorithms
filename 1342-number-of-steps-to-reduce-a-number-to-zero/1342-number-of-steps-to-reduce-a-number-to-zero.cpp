class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        if(!num)
            return num;
        while(num){
            ++count;
            if(num & 1)
                --num;
            else
                num/= 2;
        }
        return count;
        
    }
};