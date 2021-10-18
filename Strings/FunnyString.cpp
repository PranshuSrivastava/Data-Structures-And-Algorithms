#include <bits/stdc++.h>
using namespace std;
string funnyString(string s) {
    string orig=s;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.length()-1;i++)
    {
        if(abs(s[i+1]-s[i])!=abs(orig[i]-orig[i+1]))
        return "Not Funny";

    }
    return "Funny";

}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        cout<<funnyString(s)<<endl;
    }

    return 0;
}