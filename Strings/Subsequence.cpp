#include <bits/stdc++.h>
using namespace std;
void subsequence(string s, string o, vector<string> &v)
{
    //base case
    if (!s.size())
    {
        v.push_back(o);
        return;
    }
    char ch = s[0];
    string reduced_input = s.substr(1);
    subsequence(reduced_input, o, v);      //without the first character.
    subsequence(reduced_input, o + ch, v); //with the first character.
}
bool compare(string s1, string s2)
{
    if (s1.length() == s2.length())
        return s1 < s2;
    return s1.length() < s2.length();
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    string s;
    cin >> s;
    vector<string> v;
    string output = "";
    subsequence(s, output, v);
    sort(v.begin(), v.end(), compare);
    for (auto n : v)
        cout << n << " ";
    return 0;
}