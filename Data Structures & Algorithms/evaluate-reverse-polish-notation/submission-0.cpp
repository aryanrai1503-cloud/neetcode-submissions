class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string c:tokens){
            if(c!="+"&&c!="-"&&c!="*"&&c!="/") st.push(stoi(c));
            else{
                if(c=="+"){
                    int y=st.top();
                    st.pop();
                    int x=st.top();
                    st.pop();
                    st.push(x+y);
                    continue;
                }else if(c=="-"){
                    int y=st.top();
                    st.pop();
                    int x=st.top();
                    st.pop();
                    st.push(x-y);
                    continue;

                }else if(c=="*"){
                    int y=st.top();
                    st.pop();
                    int x=st.top();
                    st.pop();
                    st.push(x*y);
                    continue;

                }else{
                    int y=st.top();
                    st.pop();
                    int x=st.top();
                    st.pop();
                    st.push(x/y);
                    continue;

                }
            }
        }
        return st.top();
    }
};
