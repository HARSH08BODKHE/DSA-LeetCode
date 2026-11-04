class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> nse(n);
        nse[n-1] = prices[n-1];   
        stack<int> st;
        st.push(prices[n-1]);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && st.top()>prices[i]){
                st.pop();
            }
            if(st.size()==0) nse[i]=prices[i];
            else{
                nse[i] = prices[i]-st.top();
            };
            st.push(prices[i]);
        }
        return nse; 
    }
};