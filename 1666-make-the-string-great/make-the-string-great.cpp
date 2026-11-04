class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++) {
            if(st.size() > 0 && abs(st.top() - s[i]) == 32) {
                st.pop();
            }
            else {
                st.push(s[i]);
            }
        }
        string ans;
        while(st.size() > 0) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};