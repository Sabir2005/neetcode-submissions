class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for (int j = 0; j < nums.size(); j++) {
            for (int i = j + 1; i < nums.size(); i++) {
                if (nums[j] == nums[i]) {
                    return true;
                }
            }
        }
        return false;
    }
};