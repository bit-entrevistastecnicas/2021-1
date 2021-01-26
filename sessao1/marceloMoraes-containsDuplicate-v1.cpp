/*
    217. Contains Duplicate
    https://leetcode.com/problems/contains-duplicate/
*/

// O(n) Runtime Complexity
// O(n) Space Complexity
class Solution {
   public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> frequency;

        for (auto num : nums) {
            frequency[num]++;
            if (frequency[num] > 1) return true;
        }

        return false;
    }
};