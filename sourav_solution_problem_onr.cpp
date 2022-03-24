#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>

#include <iostream>
using namespace std;
string res ="";
int main(){
string language ;
string word;
getline(cin, language);
getline(cin, word);
    int size = language.size();
    for(int i=0; i<size; i++){
        if(isalpha(language[i]))
            language[i] = (char)tolower(language[i]);
            
    }
    size = word.size();
    for(int i=0; i<size; i++){
        if(isalpha(word[i]))
            word[i] = (char)tolower(word[i]);
            
    }
unordered_map<char, int> languagemap;
for(auto charac:language){
    languagemap[charac]++;
    if(languagemap[charac]>1){
        cout<<"New Language Error"<<endl;
        return 0;
        
    }
    
}
string tmp;
   stringstream str_strm(word);
   vector<string> wordvector;
   while (str_strm >> tmp) {
      wordvector.push_back(tmp);
   }

for(auto word : wordvector){
    unordered_map<char, int> wordmap;
    for(auto w: word){
        wordmap[w]++;
    }
    for(auto el:language){
        if(wordmap.find(el)!=wordmap.end()){
            while(wordmap[el]--){
                res = res+el;
            }
        }
    }
    res+= " ";
}
res.pop_back();
cout<<res<<endl;
    return 0;
}