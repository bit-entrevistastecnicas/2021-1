/*
    283. Move Zeroes
    https://leetcode.com/problems/move-zeroes/ 
*/

// O(n²) Runtime Complexity
// O(1) Space Complexity
class Solution {
   public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, limit = nums.size() - 1;

        while (i < limit) {
            if (nums[i] == 0) {
                nums.erase(nums.begin() + i);
                nums.push_back(0);
                limit--;
            } else
                i++;
        }
    }
};