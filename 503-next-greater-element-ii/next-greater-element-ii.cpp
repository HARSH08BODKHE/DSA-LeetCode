class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        stack<int> st;
        int n = arr.size();

        vector<int> nge(n, -1);

        for(int i = 2*n-1; i >= 0; i--) {
            int idx = i % n;
            while(st.size() > 0 && st.top() <= arr[idx]) {
                st.pop();
            }
            if(i < n) {
                if(st.size() == 0) {
                    nge[idx] = -1;
                }
                else {
                    nge[idx] = st.top();
                }
            }
            st.push(arr[idx]);
        }
        return nge;
    }
};