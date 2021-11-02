#include <bits/stdc++.h>
using namespace std;
bool outofPlace(vector<int> a, int i)
{
    if (i == 0)
    {
        return a[i] > a[i + 1];
    }
    else if (i == a.size() - 1)
        return a[i] < a[i - 1];
    return a[i] > a[i + 1] or a[i] < a[i - 1];
}
pair<int, int> subArraySort(vector<int> a)
{
    int n = a.size(), first = INT_MAX, second = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (outofPlace(a, i))
        {
            first = min(first, a[i]);
            second = max(second, a[i]);
        }
    }
    if (first == INT_MAX)
        return {-1, -1};
    int left = 0;
    while (first >= a[left])
        left++;
    int right = n - 1;
    while (second <= a[right])
        right--;
    return {left, right};
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);

    vector<int> array{1, 2, 3, 4, 5, 8, 6, 7, 9, 10, 11};
    pair<int, int> p = subArraySort(array);
    cout << p.first << " " << p.second;
    return 0;
}