class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        do{
            while(num)
            {
                int a = num%10;
                sum+= a;
                num/=10;
            }
            num=sum;
            sum=0;
        }while((num/10)!=0);
        return num;
    }
};