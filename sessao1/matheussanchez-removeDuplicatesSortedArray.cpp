//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/


// O(n) Runtime Complexity
// O(1) Space Complexity
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int first = 0;
        if(nums.size() == 0)
            return 0;
        
        for(int j = 1; j < nums.size(); j++){
            
            if(nums[j] != nums[first]){
                first++;
                nums[first] = nums[j];
            }

        }
        
        
        first = first+1;
        
        return first;
    }
};