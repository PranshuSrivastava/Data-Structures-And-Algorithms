//implementation of 2d vector.
#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
     int n,t,input;
    cin>>n>>t;
    vector<int> widths(n);
    for(int i=0;i<n;i++)
    {
        cin>>widths[i];
    }
    vector<vector<int>> cases;
    for(int i=0;i<t;i++)
    {
         vector<int> w;
         {
             for(int j=0;j<2;j++)
             {
                  cin>>input;
                   w.push_back(input);

             }

         }

         cases.push_back(w);

    }
    int min;
    vector<int> sol;
    for(int i=0;i<t;i++)
    {

            min=INT_MAX;
            for(int j=cases[i][0];j<=cases[i][1];j++)
            {
                if(widths[j]<min)
                min=widths[j];
            }
            sol.push_back(min);

    }

    for(int a:sol)
    cout<<a<<endl;
    return 0;

}