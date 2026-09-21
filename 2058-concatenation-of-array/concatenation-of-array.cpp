class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        for (int i = 0; i < n * 2; i++) {
            if (i < n) {
                ans.push_back(nums[i]);
            } else {
                ans.push_back(nums[i % n]);
            }
        }
        return ans;
    }
};