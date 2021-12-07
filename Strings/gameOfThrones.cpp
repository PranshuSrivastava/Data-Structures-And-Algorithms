#include <bits/stdc++.h>
using namespace std;
string gameOfThrones(string s)
{
    int bitvector = 0, mask = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int x = s[i] - 'a';
        mask = 1 << x;
        bitvector = bitvector ^ mask;
    }
    if ((bitvector & bitvector - 1) == 0)
        return "YES";
    else
        return "NO";
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
    cin>>s;
    cout<<gameOfThrones(s);

    return 0;
}