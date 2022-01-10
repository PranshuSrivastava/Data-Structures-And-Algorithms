class Solution {
public:
    string addBinary(string a, string b) {
        int n1= a.length()-1,n2=b.length()-1,temp=0;
        string sol="";
        while(n1>=0 || n2>=0 || temp==1)
        {
            temp+=((n1>=0)?a[n1]-'0':0);
            temp+=((n2>=0)?b[n2]-'0':0);
            sol=char(temp%2+'0')+sol;
            temp/=2;
            n1--;n2--;
        }
                        
        return sol;
        
    }
};