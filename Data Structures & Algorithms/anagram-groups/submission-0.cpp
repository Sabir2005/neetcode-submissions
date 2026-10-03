class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for (int i = 0; i < strs.size(); i++) {
            string sortedS = strs[i];
            sort(sortedS.begin(), sortedS.end());
            map[sortedS].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for (auto &eintrag : map) {
            result.push_back(eintrag.second);
        }
        return result;
    }
};
