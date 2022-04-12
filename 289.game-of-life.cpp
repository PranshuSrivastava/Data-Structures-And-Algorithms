/*
 * @lc app=leetcode id=289 lang=cpp
 *
 * [289] Game of Life
 */

// @lc code=start
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define deb(x) cout << #x << "=" << x << endl
#define all(x) x.begin(), x.end()
#define nline cout << '\n';
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define sz(x) (int)x.size()
#define lt(x) (int)x.length()
#define F first
#define S second
typedef unordered_map<int, int> mi;
typedef vector<string> vs;
typedef vector<vs> vvs;
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
#define mod 1e9 + 7
using namespace std;
class Solution
{
public:
    void gameOfLife(vector<vector<int>> &board)
    {
        int r = board.size();
        int c = board[0].size();
        vvi newboard(r,vector<int> (c));
        for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                int liveneighbours = check(board, i - 1, j - 1) + check(board, i - 1, j) + check(board, i - 1, j + 1) + check(board, i, j - 1) + check(board, i, j + 1) + check(board, i + 1, j - 1) + check(board, i + 1, j) + check(board, i + 1, j + 1);
                if (board[i][j] == 1)
                {
                    newboard[i][j] = (liveneighbours < 2 || liveneighbours > 3) ? 0 : 1;
                }
                else
                {
                    newboard[i][j] = (liveneighbours == 3) ? 1 : 0;
                }
            }
        }
            board.clear();
            for(vi i: newboard){
                board.pb(i);
            }
    }
    int check(vector<vector<int>> board, int r, int c)
    {
        if (r < 0 or c >= board[0].size() or r >= board.size() or c < 0 or board[r][c] == 0)
            return 0;
        return 1;
    }
};
// @lc code=end
