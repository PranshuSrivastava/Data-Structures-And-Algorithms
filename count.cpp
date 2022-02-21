#include <bits/stdc++.h>

using namespace std;

int lower_bound(vector<int> arr, int key)
{
    int s, e, ans = -1;
    s = 0, e = arr.size() - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < key)
            s = mid + 1;
        else if (key < arr[mid])
            e = mid - 1;
    }
    return ans;
}
int upper_bound(vector<int> arr, int key)
{
    int s, e, ans = -1;
    s = 0, e = arr.size() - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > key)
            e = mid - 1;
        else
            s = mid +1;
    }
    return ans;
}
int main()
{
    vector<int> arr = {0, 1, 1, 2, 3, 3, 3, 3, 4, 5, 5, 5, 10};
    int n = arr.size();
    cout <<upper_bound(arr,3)-lower_bound(arr, 3)+1;
    return 0;
}