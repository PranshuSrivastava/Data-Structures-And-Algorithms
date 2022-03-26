/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */

// @lc code=start
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define vi vector<int>
#define mi unordered_map<int, int>
#define nline cout << '\n';
#define sz(x) (int)x.size()
#define lt(x) (int)x.length()
using namespace std;
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int ub = sz(nums) - 1, lb = 0, mid;
        while (lb <= ub)
        {
            mid = (lb + ub) / 2;
            if(nums[mid] == target)
            return mid;
            else if(nums[mid]<target)
            lb=mid+1;
            else
            ub=mid-1;
        }
        return -1;
    }
};
// @lc code=end
