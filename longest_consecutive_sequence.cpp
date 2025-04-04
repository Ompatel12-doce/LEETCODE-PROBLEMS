class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> us(nums.begin(), nums.end());
        int ans = 0;
        unordered_map<int, int> um;
        for (int x : nums) {
            int y = x;
            while (us.contains(y)) {
                us.erase(y++);
            }
            um[x] = (um.contains(y) ? um[y] : 0) + y - x;
            ans = max(ans, um[x]);
        }
        return ans;
    }
};
