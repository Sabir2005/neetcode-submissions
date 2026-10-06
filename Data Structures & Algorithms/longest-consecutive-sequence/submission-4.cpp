class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int longest = 1;
        int curr = 1;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i+1]) {
                continue;
            } else if (nums[i] == nums[i+1] - 1) {

                curr++;
            } else {
                longest = std::max(longest, curr);
                curr = 1;
            }
        }
        return std::max(longest, curr);
    }
};
