class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ass) {
        stack<int> st;
        int n = ass.size();
        for(int i = 0; i < n; i++) {
            if(ass[i] > 0) {
                st.push(ass[i]);
            }
            else {
                bool alive = true;
                while(st.size() > 0 && st.top() > 0) {
                    if(abs(st.top()) > abs(ass[i])) {
                        alive = false;
                        break;
                    }
                    else if(abs(st.top()) == abs(ass[i])) {
                        st.pop();
                        alive = false;
                        break;
                    }
                    else {
                        st.pop();
                    }
                }
                if(alive) {
                    st.push(ass[i]);
                }
            }
        }
        vector<int> ans;
        while(st.size() > 0) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};