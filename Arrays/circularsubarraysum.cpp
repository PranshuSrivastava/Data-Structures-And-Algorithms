#include <bits/stdc++.h>
using namespace std;
int kadane(int arr[], int n)
{
    int currSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum < 0)
            currSum = 0;
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int currSum = 0;
    int totalsum = 0;
    int nowrapsum = kadane(a, n);
    for (int i = 0; i < n; i++)
    {
        totalsum += a[i];
        a[i] = -a[i];
    }
    int wrapsum = totalsum + kadane(a, n);
    cout << max(wrapsum, nowrapsum);
}