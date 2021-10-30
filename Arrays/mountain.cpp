#include <bits/stdc++.h>
using namespace std;
int highest_mountain(vector<int> a){
    int n = a.size();
    int largest = 0;
    for(int i=1;i<n-1;i)
    {
        if(ca[i]>a[i-1] and a[i]>a[i+1])
        {
            int cnt = 1;
            while(j>=1 and a[j]>a[j-1])
            {
                j--;
                cnt++;
            }
            while(i<n-1 and a[i]>a[i+1])
            {
                i++;
                cnt++;
            }
        }
        else 
        i++;

    }
    return largest;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);

    vector<int> array{5,6,1,2,3,4,5,4,2,3,0,1,2,3,-4};
    cout<<highest_mountain(array);
    return 0;
}