/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* returnS = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    for(int i = 0; i < numsSize; i++) {
        int fix = nums[i];
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                returnS[0] = i;
                returnS[1] = j;
                return returnS;
            }
        }
    }
    return NULL;

}