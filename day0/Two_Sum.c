// return type is int pointer( result)
// put the length of the return pointer's length in the *returnSize of the peremeter of the func 
// malloc()


int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    
    *returnSize = 2; // Always return two indices
    int* result = (int*)malloc(2 * sizeof(int)); // allocate array of 2 ints

    int a = 0;
    for (int i=0; i<numsSize ; i++){
        a = target - nums[i];
        result[0] = i;
        for (int j =i+1; j<numsSize; j++){
            if( a == nums[j]){
                result[1] = j;
                 return result;
            }
        }

    }
    *returnSize = 0;
    return NULL;
}
