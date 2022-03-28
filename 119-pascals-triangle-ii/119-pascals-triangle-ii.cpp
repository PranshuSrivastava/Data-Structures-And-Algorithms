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
    vector<int> getRow(int rowIndex) {
        vi ans;
        vvi res(rowIndex+1,vi(rowIndex+1));
        res[0][0] = 1;
        for(int i  = 1;i<=rowIndex;++i){
            res[i][0] = 1;
            res[i][i] = 1;
            for (int j = 1; j < i ; ++j)
            {
                res[i][j] = res[i-1][j-1] + res[i-1][j];
            }
        }
        for (size_t i = 0; i <=rowIndex ; i++)
        {
            ans.pb(res[rowIndex][i]);
        }
        return ans;

    }
};