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
    vector<string> valid;
    bool isSafe(vs& board, int r, int c, int n){
        for(int i = 0; i < r; ++i){
            if(board[i][c] == 'Q')
            return 0;
        }
        int row = r, col = c;
        while(row-- and col--){
            if(board[row][col] == 'Q')
            return 0;
        }
        row = r, col = c;
        while(row-- and col++<n){
            if(board[row][col] == 'Q')
            return 0;
        }
        return 1;
    }
    void nQueen(vs& board, int n, int& ans, int r){
        if(r>=n){
            ans++;
            return;
        }
        for(int c = 0; c < n; ++c){
            if(isSafe(board, r, c, n)){
                board[r][c] = 'Q';
                nQueen(board, n, ans, r+1);
                board[r][c] = '.';
            }
        }
    }
    int totalNQueens(int n) {
        int ans = 0;
        vector<string> board;
        string s(n, '.');
        for(int i = 0; i < n; ++i){
            board.pb(s);
        }
        nQueen(board, n, ans, 0);
        return ans;
    }
};