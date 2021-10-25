#include <bits/stdc++.h>
using namespace std;

string happyLadybugs(string b) {
    bool ok=count(b.begin(),b.end(),'_');

    for(int i=0;i<b.length();i++)
    {
        if(b[i]!=b[i-1] && b[i]!=b[i+1] && b[i]!='_')
    {

        if(count(b.begin(),b.end(),b[i])<2 || !ok)
        {   
            cout<<b[i]<<" "<<count(b.begin(),b.end(),b[i])<<" "<<ok<<endl;
            return "NO";
        }
    }
}
return "YES";
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
    while(t--)
    {
        string b;
        int n;
        cin>>n;
        cin>>s;
        cout<<happyLadybugs(b)<<endl;
    }
    return 0;
}