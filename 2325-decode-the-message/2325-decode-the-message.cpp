class Solution {
public:
    string decodeMessage(string key, string message) {
        vector<char> m(key.size(), 'A');
        int n = key.size();
        int a = 0;
        for(int i = 0; i < n; ++i){
            if(key[i] != ' ' and m[key[i] - 'a'] == 'A')
            {m[key[i] - 'a'] = char(97 + a);
            ++a;
        }
        }
        for(int i = 0; i < message.size(); ++i){
            if(message[i]!=' ')
            message[i] = m[message[i] - 'a'];
        }
        return message;
    }
};