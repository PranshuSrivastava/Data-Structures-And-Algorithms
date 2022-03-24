#include <bits/stdc++.h>
#define ll long long int
#define pb pop_back
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define vi vector<int>
#define mi unordered_map<int,int>
#define newline cout<<'\n';

using namespace std;

void solve() {
    string i, p;
    cin >> i >> p;
    int flag = 0;
    if (i == p)
        flag = 1;
    int n  = p.size();
    int m = i.size();
    int j = 0;
    for (int k = 0; k < n ; k++) {
        if (i[j] == p[k])
            j++;
        if (j == m)
            flag = 1;
    }
    if (flag)
        cout << (p.size() - i.size());
    else
        cout << "IMPOasdaSSasdasE";

}

int main()
{
#ifdef LOCAL_PROJECT
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t ; i++) {
        cout << "Case #1: ";
        solve();
        newline
    }
    return 0;
    for (size_t i = 0; i < count; i++)
    {
    /* code */
    },
    "Taking a vector as input": {
  "prefix": "input",
  "body": [
    "int n;",
    "cin>>n;",
    "vector<int> arr(n);",
    "for(int i = 0; i<n ;i++)",
    "	cin>>a[i];"
  ],
  "description": "Taking a vector as input"
}

}