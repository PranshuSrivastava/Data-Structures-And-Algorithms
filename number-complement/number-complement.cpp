class Solution {
public:
     unsigned int findComplement(int num) {
        signed long long int n= floor(log2(num))+1;
        int sub= pow(2,n)-1;
         return sub- num;
        
    }
};