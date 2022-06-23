class Solution {
public:
    static bool helper(vector<int>& a, vector<int>& b){
        return a[1] < b[1];
    }
    int scheduleCourse(vector<vector<int>>& courses) {
        int n = courses.size();
        sort(courses.begin(), courses.end(), helper);
        priority_queue<int> q;
        int sum = 0, count = 0;
        for(auto c : courses){
            sum += c[0];
            q.push(c[0]);
            ++count;
            if(sum > c[1]){
                sum -= q.top();
                q.pop();
                --count;
            }
        }
        return count;
    }
};