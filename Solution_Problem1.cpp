#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>

using namespace std;

string ans = "";

int main()
{
    string lang;
    string word;
    getline(cin, lang);
    getline(cin, word);
    int size = (int)lang.size();
    for (int i = 0; i < size; i++)
    {
        if (isalpha(lang[i]))
            lang[i] = (char)tolower(lang[i]);
    }
    size = word.size();
    for (int i = 0; i < size; i++)
    {
        if (isalpha(word[i]))
            word[i] = (char)tolower(word[i]);
    }
    unordered_map<char, int> langmap;
    for (auto character : lang)
    {
        langmap[character]++;
        if (langmap[character] > 1)
        {
            cout << "New Language Error" << endl;
            return 0;
        }
    }
    string temp;
    stringstream strm(word);
    vector<string> wordvec;
    while (strm >> temp)
    {
        wordvec.push_back(temp);
    }

    for (auto wd : wordvec)
    {
        unordered_map<char, int> m;
        for (auto w : wd)
        {
            m[w]++;
        }
        for (auto el : lang)
        {
            if (m.find(el) != m.end())
            {
                while (m[el]--)
                {
                    ans = ans + el;
                }
            }
        }
        ans += " ";
    }
    ans.pop_back();
    cout << ans;
    return 0;
}
