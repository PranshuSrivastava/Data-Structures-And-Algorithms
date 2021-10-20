#include <bits/stdc++.h>
using namespace std;
int chocolateFeast(int n, int c, int m) {
    int wrappers, count=0;
    count+=n/c;
    wrappers=n/c;
    while(wrappers!=0)
    {
        count+=wrappers/m;
        if(wrappers/m!=0)
        wrappers=wrappers/m+wrappers%m;
        else
        wrappers=0;

    }
    return count;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);

    int a,b,c;
    int t;
    cin>>t;
    while(t--)
    {cin>>a>>b>>c;
    cout<<chocolateFeast(a,b,c)<<endl;
    }
    return 0;
}