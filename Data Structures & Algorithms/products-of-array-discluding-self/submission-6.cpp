class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        vector<int> links(n);
        vector<int> rechts(n);
        links[0] = 1;
        rechts[n-1] = 1;
        for (int i = 1; i < n; i++) {
            links[i] = links[i-1] * nums[i-1];
        }
        for (int j = n-2; j >= 0; j--) {
            rechts[j] = rechts[j+1] * nums[j+1];
        }
        for (int k = 0; k < n; k++) {
            res[k] = links[k] * rechts[k];
        }
        return res;
    }
};