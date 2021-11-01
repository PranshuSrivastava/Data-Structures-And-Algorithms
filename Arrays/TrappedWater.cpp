#include <bits/stdc++.h>
using namespace std;
int trappedWater(vector<int> arr)
{
    int n = arr.size();
    if (n <= 2)
        return 0;
    vector<int> leftArray(n), rightArray(n);
    leftArray[0] = arr[0];
    rightArray[n-1] = arr[n-1];
    for (int i = 1; i < n; i++)
    {
        leftArray[i] = max(leftArray[i - 1], arr[i]);
        rightArray[n - 1 - i] = max(rightArray[n - i], arr[n - i - 1]);
    }
    int water = 0;
    for (int i = 0; i < n; i++)
    {
        water += min(leftArray[i], rightArray[i]) - arr[i];
    }
    return water;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    vector<int> arr{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << trappedWater(arr);
    return 0;
}