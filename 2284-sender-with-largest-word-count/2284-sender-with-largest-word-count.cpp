class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        
        unordered_map<string, int> m1;
        
        for(int i=0;i<messages.size();i++)
        {
            int count=0;
            for(char ch: messages[i])
            {
                if(ch==' ') count++;
            }
            m1[senders[i]]+=count + 1;
        }
        string name="";
        int maxval=INT_MIN;
        
        for(auto [key, val] : m1)
        {
            cout<<key<<" "<<val<<"\n";
        }
        
        for(auto [key, val] : m1)
        {
            if((maxval < val) || (maxval==val && key>name)){
                cout<<"here key is "<<key<<" name is "<<name<<" val is "<<val<<" maxval is "<<maxval<<"\n";
                if(key>name)
                    cout<<"true\n";
                maxval=val;
                name=key;
            }
            
        }
        return name;
    }
};