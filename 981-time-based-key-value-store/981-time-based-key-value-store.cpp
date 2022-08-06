class TimeMap {
public:
    map<string, vector<pair<int, string>>>m;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        int n = m[key].size();
        int l = 0, h = n - 1;
        string ans = "";
        
        while(l <= h){
            int mid = (l + h)/2;
            if(m[key][mid].first == timestamp)
            {   cout<<"ok";
                cout<<m[key][mid].second;
                return m[key][mid].second;
            }
            else if(m[key][mid].first < timestamp){
                ans = m[key][mid].second;
                l = mid + 1;
            }
            else
                h = mid - 1;
        }
        return ans;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */