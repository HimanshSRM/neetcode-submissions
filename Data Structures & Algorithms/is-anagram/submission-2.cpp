class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char , int> ump;
        if (s.size() != t.size()) return false ;
        for (int i = 0 ; i < s.size() ; i++){
            ump[s[i]]++;
        }
        for (auto c : t){
           if (ump[c] == 0){
            return false;
           }
           ump[c]--;
        }
        return true;
    }
};
