class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        if(n==1)
            arr[0]=-1;
        for(int i=0;i<n-1;i++)
        {
            arr[i]=*max_element(arr.begin()+1+i,arr.end());
        }
        arr[n-1]=-1;
        return arr;
        
    }
};