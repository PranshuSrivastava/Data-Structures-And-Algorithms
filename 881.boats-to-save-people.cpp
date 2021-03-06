/*
 * @lc app=leetcode id=881 lang=cpp
 *
 * [881] Boats to Save People
 */

// @lc code=start
#include <bits/stdc++.h>
#define ll long long int
#define pb pop_back
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
    int numRescueBoats(vector<int> &people, int limit)
    {
        int count = 0;
        mi m;
        for (int i : people)
        {
            m[i]++;
        }
        for (int i : people)
        {
            if(m[limit-i]){
                m[limit-i]--;
            }
            if(m[i])
            count++;
    
            m[i]--;
        }
        return count;
    }
};
// @lc code=end
