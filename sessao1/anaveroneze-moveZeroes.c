// Exercicio: https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/567/

void moveZeroes(int* nums, int numsSize){
    int i, count_aux;
    
    count_aux = 0;
    
    for(i=0; i<numsSize; i++){
        if(nums[i] != 0)
            nums[count_aux++] = nums[i];
    }
    
    for(i=count_aux; i<numsSize; i++)
        nums[i] = 0;
    
}
