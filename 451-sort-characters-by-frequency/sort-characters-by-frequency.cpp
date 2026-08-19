class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char, int> mp;

        // Count frequency
        for (char c : s) {
            mp[c]++;
        }

        // Store {frequency, character}
        vector<pair<int, char>> v;

        for (auto it : mp) {
            v.push_back({it.second, it.first});
        }

        // Sort by frequency descending
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.first > b.first;
        });

        // Build answer
        string ans;

        for (auto it : v) {
            ans.append(it.first, it.second);
        }

        return ans;
    }
};