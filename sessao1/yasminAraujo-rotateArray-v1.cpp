/*
    189. Rotate Array
    https://leetcode.com/problems/rotate-array/
*/

// O(n) Runtime Complexity
// O(n) Space Complexity
class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        vector<int> aux = nums;
        
        for(int i = 0; i < nums.size(); i++)
            nums[(i + k) % nums.size()] = aux[i];
    }
};

// O(n^2) Runtime Complexity
// O(1) Space Complexity
class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int last;
        int lastIndex = nums.size() - 1;
        k %= nums.size();
        
        for(int i = 0; i < k; i++) // O(n)
        {
            last = nums[lastIndex];
            nums.pop_back();
            nums.insert(nums.begin(), last); // O(n)
        }
    }
}; 

// O(n) Runtime Complexity
// O(1) Space Complexity
class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};