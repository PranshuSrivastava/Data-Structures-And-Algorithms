#include <bits/stdc++.h>
using namespace std;
int minimumAbsoluteDifference(vector<int> arr)
{
    int min = INT_MAX, n = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 1; i++)
    {
        if ((arr[i + 1] - arr[i]) < min)
            min = arr[i + 1] - arr[i];
    }
    return min;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<minimumAbsoluteDifference(arr);
    return 0;
}