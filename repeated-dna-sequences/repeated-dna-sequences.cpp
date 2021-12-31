class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> sol;
        map<string,int> check;
        for(int i=0;i+10<=s.length();i++)
        {
            string sub=s.substr(i,10);
            if(check[sub]==1)
            {
                sol.push_back(sub);
            }
            check[sub]++;
        }
        return sol;
        
        
    }
};