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
    int numIslands(vector<vector<char>>& grid) {
        if(!grid.size())
        return 0;
        int m = grid.size(), n = grid[0].size(), islands = 0;
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                if(grid[i][j] == '1')
                {
                    ++islands;
                    eraseIslands(grid, i , j);
                }
            }
        }
        return islands;
    }
    void eraseIslands(vector<vector<char>>& grid, int i , int j){
        if( i < 0  or i == grid.size() or j < 0 or j == grid[0].size() or grid[i][j] == '0')
        return;
        deb2(i, j);
        grid[i][j] = '0';
        eraseIslands(grid, i + 1, j);
        eraseIslands(grid, i - 1, j);
        eraseIslands(grid, i, j + 1);
        eraseIslands(grid, i, j - 1);
        return ;

    }
};