#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define deb(x) cout << #x << "=" << x << endl
#define all(x) x.begin(), x.end()
#define nline cout<<'\n';
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define sz(x) (int)x.size()
#define lt(x) (int)x.length()
#define F first
#define S second
typedef unordered_map<int,int> mi;
typedef vector<string> vs;
typedef vector<vs> vvs;
typedef pair<int, int>  pii;
typedef pair<ll, ll>    pl;
typedef vector<int>     vi;
typedef vector<ll>      vl;
typedef vector<pii>     vpii;
typedef vector<pl>      vpl;
typedef vector<vi>      vvi;
typedef vector<vl>      vvl;
#define mod 1e9+7
using namespace std;
class Solution {
public:
    int minDistance(string word1, string word2) {
        int n1 = word1.size(), n2 = word2.size();
        vector<vector<int>> dp(n1 + 1, vector<int> (n2 + 1));
        for(int i = 0; i <= n1; ++i){
            for (int j = 0; j <= n2; ++j)
            {
                if(i == 0 || j == 0)
                    continue;
                if(word1[i-1] == word2[j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }

            cout<<"ok";
        }
        return n1 + n2 - 2*dp[n1][n2];
    }
};


