//Perform basic bit operations
#include <bits/stdc++.h>
using namespace std;
bool ispowerof2(int n)
{
    return !(n && (n & (n - 1)));
}
int numberofones(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
void subsets(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << '\n';   
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    int arr[4] = {1, 2, 3, 4};
    cout << ispowerof2(16) << '\n';
    cout << numberofones(7) << '\n';
    subsets(arr, 4);

    return 0;
}