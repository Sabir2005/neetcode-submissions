class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
        }
        vector<vector<int>> bucket(nums.size() + 1);

        for (auto& p : map) {
            bucket[p.second].push_back(p.first);
        }

        vector<int> res;
        for (int i = bucket.size() - 1; i >= 0; i--) {
            for (int n : bucket[i]) {
                if (res.size() == k) {
                    return res;
                }
                res.push_back(n);
            }
        }
        return res;
    }
};
