#define ll long long
class MinStack {
public:
    stack<ll> st;
    ll mini;
    MinStack() {
        st=stack<ll>();
        mini=INT_MAX;
    }
    
    void push(int val) {
        if(st.empty()) {
            mini=val;
            st.push(val);
        }else{
            if(val>=mini) st.push(val);
            else{
                st.push(2LL*val-mini);
                mini=val;
            }
        }

    }
    
    void pop() {
        if(st.empty()){
            return;
        } 
        ll x=st.top();
        st.pop();
        if(x<mini) mini=2LL*mini-x;
    }
    
    int top() {
        if(st.empty()) return INT_MIN;
        else{
            if(mini>st.top()) return mini;
            else return st.top();
        }
    }
    
    int getMin() {
        return mini;
    }
};
