#define F first
#define S second
class StockSpanner {
public:
    stack<pair<int, int>> st;
    int size = 0;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int ans = 0;
        while(st.size() and st.top().F<=price)
            st.pop();
        if(!st.size()){
            ans = size + 1;
            st.push({price, size});
            ++size;
        }
        else{
            ans = size - st.top().S;
            st.push({price, size});
            ++size;
        }
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */