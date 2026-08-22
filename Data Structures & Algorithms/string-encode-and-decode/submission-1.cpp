class Solution {
public:

    string encode(vector<string>& strs) {
        string sub="";
        for(string s:strs){
            sub += s+'\n';
        }
        return sub;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int idx=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='\n'){
                string sub = s.substr(idx,i-idx);
                idx=i+1;
                ans.push_back(sub);
            }
        }
        return ans;
    }
};
