class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        int n = ops.size();
        for(int i=0;i<n;i++){
            if(ops[i]=="D"){
                int val = st.top();
                st.push(2*val);
            }
            else if(ops[i]=="C"){
                st.pop();
            }
            else if(ops[i]=="+"){
                int val1 = st.top();
                st.pop();
                int val2 = st.top();
                st.push(val1);
                st.push(val1+val2);
            }
            else{
                int val = stoi(ops[i]);
                st.push(val);
            }
        }
        int sum = 0;
        while(st.size()>0){
            int val = st.top();
            sum += val;
            st.pop();
        }
        return sum;
    }
};