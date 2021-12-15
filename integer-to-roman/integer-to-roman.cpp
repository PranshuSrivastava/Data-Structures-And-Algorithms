class Solution {
public:
    string intToRoman(int num) {
        
        int div[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string roman[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int i=12;
        string sol;
        while(num>0 && i>-1)
        {
            int rem=num/div[i];
            num%=div[i];
            while(rem--)
            {
                sol.append(roman[i]);
            }
            i--;
        }
        return sol;
        
    }
};