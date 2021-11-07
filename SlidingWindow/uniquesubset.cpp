#include <bits/stdc++.h>
using namespace std;
string uniquesubsets(string s)
{
    int i = 0, j = 0, max = 0, start, n = s.length(), len = 0;
    unordered_map<char, int> m;
    while (j < n)
    {
        char ch = s[j];
        //If it is inside the current window.
        if (m.count(ch) and m[ch] >= i)
        {
            i = m[ch] + 1;
            len = j - i;
        }
        m[ch] = j;
        len++;
        j++;
        if (len > max)
        {
            max = len;
            start = i;
        }
    }
    return s.substr(start, max);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    string s1, s2;
    cin >> s1;
    cout << uniquesubsets(s1);
    return 0;
}