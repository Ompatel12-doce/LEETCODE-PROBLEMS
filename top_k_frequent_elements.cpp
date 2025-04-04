class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>v;
            int n=nums.size();
            map<int,int>m;
            for(int i=0;i<n;i++){
                m[nums[i]]++;
            }
            vector<pair<int, int>> vp(m.begin(), m.end());
                sort(vp.begin(), vp.end(), [](pair<int, int>& a, pair<int, int>& b) {
                    return a.second > b.second;
                });
            for(int i=0;i<k;i++){
                v.push_back(vp[i].first);
            }
            return v;
    }
};
