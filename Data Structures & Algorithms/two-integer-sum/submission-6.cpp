class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        vector<pair<int,int>> vct;

        for (int i = 0; i < nums.size(); i++) {
            vct.push_back({nums[i], i});
        }

        sort(vct.begin(), vct.end());

        while (left < right) {
            int sum = vct[left].first + vct[right].first;

            if (sum == target) {
                int i1 = vct[left].second;
                int i2 = vct[right].second;
                return {min(i1, i2), max(i1, i2)};
            }
            else if (sum < target) left++;
            else right--;
        }

        return {};
    }
};