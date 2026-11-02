class MinStack {
public:
    stack<long long> st;
    long long mini;
    MinStack() {
        mini  = LLONG_MAX;
    }
    
    void push(int val) {
        long long x = (long long)val;
        if(st.size()==0){
            st.push(x);
            mini = x;
        } 
        else if(x>=mini) st.push(x);
        else{
            st.push(2*x-mini);
            mini = x;
        }
    }
    
    void pop() {
        if(st.top()<mini){
            long long oldmini = 2*mini - st.top();
            mini = oldmini;
        }
        st.pop();
    }
    
    int top() {
        if(st.top()<mini){
            return mini;
        }
        else{
            return st.top();
        }
    }
    
    int getMin() { // O(1)
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */