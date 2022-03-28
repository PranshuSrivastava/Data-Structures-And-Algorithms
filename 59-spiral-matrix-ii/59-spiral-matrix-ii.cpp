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
#define FOR(i, a, b) for (int i=a; i<=(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
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
    vector<vector<int>> generateMatrix(int n)
    {
        vvi res(n,vi(n,1));
        int left,right, top, down, index;
        left = top = index = 0,right = down = n-1;
        while(left<=right && top<=down){
            for(int j = left; j<=right;j++){
                res[top][j] = ++index;

            }
            ++top;
            for(int i = top; i<=down;++i)
            res[i][right] = ++index;
            --right;
            for(int j = right;j>=left;--j){
                res[down][j] = ++index;
            }
            --down;
            for(int i = down; i>=top;--i){
                res[i][left] = ++index;
            }
            left++;
        }
      return res;
    }
};