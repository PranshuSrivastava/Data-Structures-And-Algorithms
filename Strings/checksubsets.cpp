#include <bits/stdc++.h>
using namespace std;
bool checksubsets(string s1, string s2)
{
    int i, j;
    for (i = 0, j = 0; i < s1.length(), j < s2.length();)
    {
        if (s1[i] == s2[j])
        {
            i++;
            j++;
        }
        else
            j++;
    }
    if (i < s1.length())
        return false;
    return true;
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
    cin >> s1 >> s2;
    cout << checksubsets(s1, s2);
    return 0;
}