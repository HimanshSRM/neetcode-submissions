class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map <int,int> ump;
        for (int i = 0 ; i < nums.size() ; i++){
            ump[nums[i]]++;
        }
        for (auto i : ump){
            if (i.second > 1) return true ;
        }
        return false;
    }
};