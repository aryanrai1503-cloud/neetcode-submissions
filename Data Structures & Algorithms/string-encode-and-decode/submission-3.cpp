class Solution {
public:
    string encode(vector<string>& strs) {
        string sub="";
        for(string s:strs){
            sub += to_string(s.size()) + "#" + s;
        }
        return sub;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int idx=0;
        int i=0;
        while(i<s.size()){
            if(s[i]=='#'){
                string len="";
                for(int j=idx;j<i;j++){
                    len+=s[j];
                }
                string sub = s.substr(i+1,stoi(len));
                idx = i+stoi(len)+1;
                i=idx;
                ans.push_back(sub);
            }
            else i++;
        }
        return ans;
    }
};
