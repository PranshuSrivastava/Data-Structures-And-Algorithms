class Solution {
public:
    string capitalizeTitle(string title) {
        transform(title.begin(),title.end(),title.begin(),::tolower);
        vector<string> sol;
        string word;
        stringstream input(title);
        while(input>>word)
            sol.push_back(word);
        word.clear();
        for(int i=0;i<sol.size();i++)
        {
            if(sol[i].length()>2)
                sol[i][0]=toupper(sol[i][0]);
            word+=sol[i];
            if(i!=sol.size()-1)
            word+=' ';
        }
        return word;
        
    }
};