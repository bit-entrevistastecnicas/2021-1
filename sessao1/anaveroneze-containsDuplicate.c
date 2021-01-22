//https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/578/

bool containsDuplicate(int* nums, int numsSize){
    
    for(int i=0; i<numsSize; i++){
        
        for(int j=(i+1); j<numsSize; j++){
            
            if(nums[i] == nums[j])
                return 1;
        }
    }
    return 0;
}
