class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false ;
        int arr[26] = {0};
        for (auto c : s){
            arr[c - 'a']++;
        }
        for (auto d : t){
            if (arr[d-'a'] == 0) return false ;
            arr[d-'a']--;
        }
        return true ;
    }
};
