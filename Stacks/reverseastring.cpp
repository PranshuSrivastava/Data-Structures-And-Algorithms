#include <bits/stdc++.h>
using namespace std;
void reverseString(string s)
{
    stack<string> reverse;
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        reverse.push(word);
    }
    while (!reverse.empty())
    {
        cout << reverse.top() << " ";
        reverse.pop();
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    string s = " Hey, how are you doing?";
    reverseString(s);

    return 0;
}