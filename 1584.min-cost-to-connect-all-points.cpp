/*
 * @lc app=leetcode id=1584 lang=cpp
 *
 * [1584] Min Cost to Connect All Points
 */

// @lc code=start
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
    struct node{
        int x, y, dist;

        bool operator()(node& a, node& b){
            return a.dist > b.dist;
        }
    };

    int minCostConnectPoints(vector<vector<int>>& points) {
        priority_queue<node, vector<node>, node> pq;
        int n=points.size(), result=0, edges=0, cur=0;
        vector<bool> visited(n);

        while(edges < n-1){
            visited[cur]=true;
            edges++;
            for(int i=0; i<n; i++){
                if(visited[i]) continue;
                int dist = abs(points[i][0] - points[cur][0]) + abs(points[i][1] - points[cur][1]);
                pq.push({i, cur, dist});
            }

            while(!pq.empty() && visited[pq.top().x] == true)
                pq.pop();

            node newedge = pq.top();
            pq.pop();
            cur = newedge.x;
            result += newedge.dist;
        }

        return result;
    }
};
// @lc code=end

