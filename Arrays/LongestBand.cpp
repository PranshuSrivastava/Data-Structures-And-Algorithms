#include <bits/stdc++.h>
using namespace std;
int largestBand(vector<int> arr)
{
    unordered_set<int> s;
    int maxi = 0;
    int n = arr.size();
    for (int x : arr)
        s.insert(x);
    for (auto element : s)
    {
        int parent = element - 1;
        if (s.find(parent) == s.end())
        {
            int count = 1;
            int child = element + 1;
            while (s.find(child) != s.end())
            {
                child++;
                count++;
            }
            maxi = max(maxi, count);
        }
    }
    return maxi;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    vector<int> arr{1, 9, 3, 0, 18, 5, 2, 10, 7, 12, 6};
    cout << largestBand(arr);
    return 0;
}