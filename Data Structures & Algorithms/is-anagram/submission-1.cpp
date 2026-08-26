class Solution {
   public:
    bool isAnagram(string s, string t) {
        vector<int> chars1(26,0), chars2(26, 0);

        for (char c : s) {
            chars1[c - 'a']++;
        }

        for (char c : t) {
            chars2[c - 'a']++;
        }

        if (chars1 == chars2) return true;

        return false;
    }
};
