class Solution {
public:
    stack<string> st;
    int n=0;
    string encode(vector<string>& strs) {
        string sub="";
        for(string s:strs){
            n++;
            sub += s;
            st.push(s);
        }
        return sub;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        for(int i=0;i<n;i++){
                string sub = st.top();
                ans.push_back(sub);
                st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
