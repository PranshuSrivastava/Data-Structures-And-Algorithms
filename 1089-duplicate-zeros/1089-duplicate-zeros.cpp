class Solution {
public:
    void insertZero(vector<int> &arr, int k)
    {
        int temp=arr[k],n=arr.size();
        for(int i=k;i<n-1;i++)
        {
            temp=arr[i+1];
            arr[i+1]=temp;
        }
    }
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                arr.insert(arr.begin()+i,0);
                i++;
            }
        }
        arr.resize(n);
    }
};