class Solution {
public:
    int bitwiseComplement(int n) {
        if(!n)
            return 1;
        long long b=log2(n)+1;
        long long n1=pow(2,b)-1;
        return n^n1;
        
    }
};