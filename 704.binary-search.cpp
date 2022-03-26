/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */

// @lc code=start
#include <bits/stdc++.h>
#define ll long long int
#define pb pop_back
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define mi unordered_map<int,int>
#define deb(x) cout << #x << "=" << x << endl
#define all(x) x.begin(), x.end()
#define vi vector<int>;
#define vl vector<ll>;
#define vpii vector<pii>;
#define vs vector<string>;
#define vvs vector<vs>;
#define nline cout<<'\n';
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define sz(x) (int)x.size()
#define lt(x) (int)x.length()
#define vvi vector<vi>;
#define all(x) x.begin,x.end()
using namespace std;
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        auto start = chrono ::high_resolution_clock::now();
        int ub = sz(nums) - 1, lb = 0, mid;
        while (lb <= ub)
        {
            mid = (lb + ub) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                lb = mid + 1;
            else
                ub = mid - 1;
        }
        auto end = chrono ::high_resolution_clock::now();
        cout<<"ok";
        double time_taken =
            chrono::duration_cast<chrono::nanoseconds>(end - start).count();
            cout<<"time taken is:"<<time_taken;
        return -1;
    }
};
// @lc code=end
