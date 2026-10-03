class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {



        for (int j = 0; j < nums.size(); j++) {
            for (int i = 0; i < nums.size(); i++) {
                if (j == i) {
                    continue;
                } else if (nums[j] == nums[i]) {
                    return true;
                } else {
                    continue;
                }
            }
        }
        return false;
    }
};