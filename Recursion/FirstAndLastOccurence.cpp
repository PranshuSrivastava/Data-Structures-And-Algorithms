//Perform basic bit operations
#include <bits/stdc++.h>
using namespace std;
int FirstOccurence(int a[], int n, int i, int key)
{
    if (i == n - 1)
    {
        return (a[i] == key);
    }

    if (a[i] == key)
        return i;
    else
        FirstOccurence(a, n, i + 1, key);
}
int LastOccurence(int a[], int n, int i, int key)
{
    if (i == n - 1)
        return (a[i] == key);
    int last = LastOccurence(a, n, i + 1, key);
    if (last)
        return last;
    if (a[i] == key)
    {
        return i;
    }
    return 0;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    int arr[] = {4, 2, 1, 2, 5, 2, 7};

    cout << FirstOccurence(arr, 7, 0, 2)<<endl;
    cout << LastOccurence(arr, 7, 0, 2);
    return 0;
}